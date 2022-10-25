#include <bits/stdc++.h>

#include "../testlib.h"

int main(int argc, char** argv) {
    registerGen(argc, argv, 1);

    int t = opt<int>("t");
    assert(1 <= t && t <= 1000);

    int maxn = opt<int>("maxn");
    assert(1 <= maxn && maxn <= 1000);

    printf("%d\n", t);

    while (t--) {
        int a = rnd.next(0, maxn);
        int b = rnd.next(0, maxn);
        int c = rnd.next(0, maxn);

        printf("%d %d %d\n", a, b, c);
    }
    return 0;
}
