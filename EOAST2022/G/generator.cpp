#include <bits/stdc++.h>

#include "../testlib.h"

int main(int argc, char** argv) {
    registerGen(argc, argv, 1);

    int n = opt<int>("n");
    assert(0 <= n && n <= 200);

    int kind = opt<int>("kind");
    assert(0 <= kind && kind <= 1);

    int maxm = opt<int>("maxm");
    assert(0 <= maxm && maxm <= 1000000000);

    if (kind == 0) {
        println(n, n);

        for (int i = 0; i < n; i++) {
            int x = rnd.next(1, maxm);
            int y = rnd.next(1, maxm);
            println(x, y);
        }

        auto vec_q = rnd.perm(n, 1);
        for (auto& it_q : vec_q) {
            println(it_q);
        }
    } else if (kind == 1) {
        println(n, 1);

        for (int i = 0; i < n; i++) {
            int x = rnd.next(1, maxm);
            int y = rnd.next(1, maxm);
            println(x, y);
        }
        println(n);
    }

    return 0;
}
