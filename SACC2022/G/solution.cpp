#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define N 100001
char str[N];
int n, q;
ll Quick_pow(ll x, ll n, ll p) {
    ll ret = 1;
    while (n) {
        if (n & 1) ret = ret * x % p;
        x = x * x % p;
        n >>= 1;
    }
    return ret;
}
ll inv(ll x, ll p) {
    return Quick_pow(x, p - 2, p);
}
inline int lowbit(int x) {
    return x & (-x);
}
struct BIT {
    ll c[N];
    void add(int x, ll y) {
        for (int i = x; i < N; i += lowbit(i)) c[i] = (c[i] + y) % MOD;
    }
    ll query(int x) {
        int ret = 0;
        for (int i = x; i; i -= lowbit(i)) ret = (ret + c[i]) % MOD;
        return ret;
    }
} bit[11];

struct SegmentTree {
    int tree[N << 2];

    void pushup(int i) {
        tree[i] = max(tree[i << 1], tree[i << 1 | 1]);
    }
    void build(int i, int l, int r) {
        if (l == r) {
            tree[i] = str[l] - '0';
            return;
        }
        int mid = (l + r) / 2;
        build(i << 1, l, mid);
        build(i << 1 | 1, mid + 1, r);
        pushup(i);
    }
    void update(int i, int l, int r, int x, int val) {
        if (l == r) {
            tree[i] = val;
            return;
        }
        int mid = (l + r) / 2;
        if (x <= mid)
            update(i << 1, l, mid, x, val);
        else
            update(i << 1 | 1, mid + 1, r, x, val);
        pushup(i);
    }

    int query(int i, int l, int r, int x, int y) {
        if (x <= l && r <= y) return tree[i];
        int maxm = 0;
        int mid = (l + r) / 2;
        if (x <= mid) maxm = max(maxm, query(i << 1, l, mid, x, y));
        if (y > mid) maxm = max(maxm, query(i << 1 | 1, mid + 1, r, x, y));
        return maxm;
    }
} segmentTree;

void p_modify(int p, int x, int y) {
    bit[p].add(x, y * Quick_pow(p, n - x, MOD) % MOD);
}

int main() {
    scanf("%d%d", &n, &q);
    scanf("%s", str + 1);
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < 11; j++) {
            p_modify(j, i, str[i] - '0');
        }
    }
    segmentTree.build(1, 1, n);
    int op, x, y;
    while (q--) {
        scanf("%d%d%d", &op, &x, &y);
        if (op == 1) {
            int add = segmentTree.query(1, 1, n, x, y) + 1;
            ll ans = (bit[add].query(y) - bit[add].query(x - 1) + MOD) % MOD;
            ans = ans * inv(Quick_pow(add, n - y, MOD), MOD) % MOD;
            printf("%lld\n", ans);
        } else if (op == 2) {
            int dis = (y - str[x] + '0' + MOD) % MOD;
            for (int i = 0; i < 11; i++) {
                p_modify(i, x, dis);
            }
            str[x] = y + '0';
            segmentTree.update(1, 1, n, x, y);
        }
    }
    return 0;
}