#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
#define N 100007

int f[N], num[N], n;

int find(int x) {
    return f[x] == x ? x : f[x] = find(f[x]);
}

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        for (int i = 1; i <= n; i++) {
            f[i] = i, num[i] = 1;
        }

        for (int i = 1, j; i <= n; i++) {
            scanf("%d", &j);
            int fi = find(i), fj = find(j);
            if (fi == fj) {
                continue;
            }
            if (num[fi] > num[fj]) {
                swap(fi, fj);
            }
            f[fi] = fj, num[fj] += num[fi];
        }

        vector<int> vec;
        for (int i = 1; i <= n; i++) {
            if (find(i) == i) {
                vec.push_back(num[i]);
            }
        }

        int m = vec.size();
        int div = vec[0];
        for (int i = 1; i < m; i++) {
            div = gcd(div, vec[i]);
        }

        ll ans = vec[0];
        for (int i = 1; i < m; i++) {
            ans = ans * (vec[i] / div) % mod;
        }
        printf("%lld\n", ans);
    }
    return 0;
}
