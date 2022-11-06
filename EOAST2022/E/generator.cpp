#include <bits/stdc++.h>

#include "../testlib.h"

int main(int argc, char** argv) {
    registerGen(argc, argv, 1);

    int kind = opt<int>("kind");
    assert(0 <= kind && kind <= 1);

    if (kind == 0) {
        println(9);
        auto perm = rnd.perm(9);
        for (int i = 0; i < 9; i++) {
            println(1);
            int x = perm[i] / 3, y = perm[i] % 3;
            println(x, y);
        }
    } else if (kind == 1) {
        int t = opt<int>("t");
        assert(1 <= t && t <= 100000);
        println(t);
        while (t--) {
            int n = rnd.next(10);
            auto perm = rnd.perm(9);
            println(n);
            for (int i = 0; i < n; i++) {
                int x = perm[i] / 3, y = perm[i] % 3;
                println(x, y);
            }
        }
    }

    return 0;
}
