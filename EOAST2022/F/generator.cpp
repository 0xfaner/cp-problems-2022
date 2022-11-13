#include <bits/stdc++.h>

#include "../testlib.h"

int main(int argc, char** argv) {
    registerGen(argc, argv, 1);

    int t = opt<int>("t");
    assert(1 <= t && t <= 100000);

    int n = opt<int>("n");
    assert(0 <= n && n <= 100000);
    assert(t * n <= 200000);

    int maxm = opt<int>("maxm");
    assert(0 <= maxm && maxm <= 1000000000);

    println(t);

    while (t--) {
        std::vector<int> vec(n);
        for (auto& it : vec) {
            it = rnd.next(0, maxm);
        }

        println(n);
        println(vec);
    }
    return 0;
}
