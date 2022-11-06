#include <bits/stdc++.h>

#include "../testlib.h"

int main(int argc, char** argv) {
    registerGen(argc, argv, 1);

    int kind = opt<int>("kind");
    assert(0 <= kind && kind <= 3);

    int maxn = opt<int>("maxn");
    assert(1 <= maxn && maxn <= 1000000000);

    if (kind == 0) {
        int t = opt<int>("t");
        assert(1 <= t && t <= 100000);

        println(t);
        while (t--) {
            for (int i = 0; i < 2; i++) {
                std::vector<int> x = rnd.distinct(2, 0, maxn);
                std::sort(x.begin(), x.end());
                std::vector<int> y = rnd.distinct(2, 0, maxn);
                std::sort(y.begin(), y.end());
                println(x[0], y[0], x[1], y[1]);
            }
        }
    } else {
        std::vector<int> x = rnd.distinct(4, 0, maxn);
        sort(x.begin(), x.end());
        std::vector<int> y = rnd.distinct(4, 0, maxn);
        sort(y.begin(), y.end());

        if (kind == 1) {
            println(1);
            println(x[1], y[1], x[3], y[3]);
            println(x[0], y[0], x[2], y[2]);
        } else if (kind == 2) {
            println(1);
            println(x[1], y[1], x[2], y[2]);
            println(x[0], y[0], x[3], y[3]);
        } else if (kind == 3) {
            println(1);
            println(x[2], y[2], x[3], y[3]);
            println(x[0], y[0], x[1], y[1]);
        }
    }
    return 0;
}
