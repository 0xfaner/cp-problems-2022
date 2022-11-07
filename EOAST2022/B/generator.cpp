#include <bits/stdc++.h>

#include "../testlib.h"

int main(int argc, char** argv) {
    registerGen(argc, argv, 1);

    int kind = opt<int>("kind");
    assert(0 <= kind && kind <= 2);

    if (kind == 0) {
        int t = opt<int>("t");
        assert(1 <= t && t <= 10000);

        int maxn = opt<int>("maxn");
        assert(1 <= maxn && maxn <= 100000);
        assert(maxn * t <= 500000);

        println(t);
        while (t--) {
            int n = rnd.wnext(1, maxn, 8);
            println(n);

            std::string format = "[1-9]{" + std::to_string(n) + "}";
            std::string str = rnd.next(format);

            int m = rnd.next(n / 2);
            for (auto& add : rnd.distinct(m, n)) str[add] = '+';

            println(str);
        }
    } else if (kind == 1) {
        int n = opt<int>("n");
        assert(1 <= n && n <= 10);

        println(1);

        std::string format = "[1-9]{" + std::to_string(n) + "}";
        std::string str = rnd.next(format);

        println(n);
        println(str);
    } else if (kind == 2) {
        int t = opt<int>("t");
        assert(1 <= t && t <= 10);

        int maxn = opt<int>("maxn");
        assert(1 <= maxn && maxn <= 100000);

        println(t);
        while (t--) {
            int n = rnd.wnext(1, maxn, 8);
            println(n);

            std::string format = "[1-9]{" + std::to_string(n) + "}";
            std::string str = rnd.next(format);
            str[rnd.next(n)] = '+';

            println(str);
        }
    }
    return 0;
}
