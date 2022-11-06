#include <bits/stdc++.h>

#include "../testlib.h"

typedef long long int64;

int main(int argc, char** argv) {
    registerGen(argc, argv, 1);

    int t = opt<int>("t");
    assert(1 <= t && t <= 500000);

    int64 maxn = opt<int64>("maxn");
    assert(1 <= maxn && maxn <= 1'000'000'000'000'000'000ll);

    println(t);

    while (t--) {
        int64 n = rnd.next(0ll, maxn);
        int64 m = rnd.next(0ll, maxn);
        if (n > m) std::swap(n, m);
        println(n, m);
    }
    return 0;
}
