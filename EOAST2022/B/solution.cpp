#include <bits/stdc++.h>
using namespace std;

#define N 500001

char str[N];
int ans[N];

int main() {
    int t, n;
    scanf("%d", &t);
    while (t--) {
        scanf("%d%s", &n, str);
        int nums[10], numk = 1;
        memset(nums, 0, sizeof(nums));
        for (int i = 0; i < n; i++) {
            if (str[i] == '+') {
                numk++;
            } else {
                nums[str[i] - '0']++;
            }
        }
        int m = 0, k = -1;
        ans[0] = 0;
        for (int i = 9; i > 0; i--) {
            for (int j = 0; j < nums[i]; j++) {
                if (++k == numk) ans[++m] = k = 0;
                ans[m] += i;
            }
        }
        for (int i = 0; i <= m; i++) {
            if (ans[i] > 9) {
                if (i == m) {
                    ans[++m] = 0;
                }
                ans[i + 1] += ans[i] / 10;
                ans[i] %= 10;
            }
        }
        for (int i = m; i >= 0; i--) {
            putchar(ans[i] + '0');
        }
        putchar('\n');
    }
    return 0;
}