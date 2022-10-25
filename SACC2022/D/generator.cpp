#include <bits/stdc++.h>

#include "../testlib.h"

int main(int argc, char** argv) {
    registerGen(argc, argv, 1);

    int t = opt<int>("t");
    assert(1 <= t && t <= 5);

    int n = opt<int>("n");
    assert(1 <= n && n <= 1000);
    int m = opt<int>("m");
    assert(1 <= m && m <= 1000000000);

    printf("%d\n", t);
    while (t--) {
        printf("%d %d\n", n, m);
        for (int i = 0; i < n; i++) {
            int s = rnd.next(1, m);
            int v = rnd.next(1, 1000);
            printf("%d %d\n", s, v);
        }
    }
    return 0;
}
