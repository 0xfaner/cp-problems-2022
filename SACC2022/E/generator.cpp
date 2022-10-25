#include <bits/stdc++.h>

#include "../testlib.h"

int main(int argc, char** argv) {
    registerGen(argc, argv, 1);

    int t = opt<int>("t");
    assert(1 <= t && t <= 1000);
    int maxn = opt<int>("maxn");
    assert(1 <= maxn && maxn <= 100000);
    assert(t * maxn <= 500000);

    println(t);

    while (t--) {
        int n = rnd.wnext(1, maxn, 10);
        println(n);
        println(rnd.perm(n, 1));
    }
    return 0;
}
