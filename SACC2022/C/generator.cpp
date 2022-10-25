#include <bits/stdc++.h>

#include "../testlib.h"

int main(int argc, char** argv) {
    registerGen(argc, argv, 1);

    // 0: common, 1: 2 ^ k
    int type = opt<int>("type");
    assert(0 <= type && type <= 2);

    if (type == 0) {
        int t = opt<int>("t");
        assert(1 <= t && t <= 100000);

        printf("%d\n", t);

        int maxn = opt<int>("maxn");
        assert(1 <= maxn && maxn <= 1000000000);

        while (t--) {
            int n = rnd.next(2, maxn);

            printf("%d\n", n);
        }
    } else if (type == 1) {
        int t = 100000;
        printf("%d\n", t);
        for (int i = 0; i < t; i++) {
            printf("%d\n", 2 << i % 28);
        }
    } else if (type == 2) {
        int t = 100000;
        printf("%d\n", t);
        for (int i = 0; i < t; i++) {
            printf("%d\n", i + 2);
        }
    }
    return 0;
}
