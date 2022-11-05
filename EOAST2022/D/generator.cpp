#include <bits/stdc++.h>

#include "../testlib.h"

int main(int argc, char** argv) {
    registerGen(argc, argv, 1);

    int t = opt<int>("t");
    assert(1 <= t && t <= 100);

    int n = opt<int>("n");
    assert(1 <= n && n <= 1000);

    int maxm = opt<int>("maxm");
    assert(1 <= maxm && maxm <= 1000000000);

    int zero_weight = opt<int>("zero_weight");

    println(t);

    while (t--) {
        int m = rnd.next(1, maxm);
        println(n, m);
        std::vector<int> vec(n);
        for (int i = 1; i < n - 1; i++) {
            int flag = rnd.wnext(2, -zero_weight);
            if (flag) {
                vec[i] = rnd.next(-m, m);
            } else {
                vec[i] = 0;
            }
        }
        println(vec);
    }
    return 0;
}
