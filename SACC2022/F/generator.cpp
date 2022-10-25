#include <bits/stdc++.h>

#include "../testlib.h"

int main(int argc, char** argv) {
    registerGen(argc, argv, 1);

    int t = opt<int>("t");
    assert(1 <= t && t <= 1000);
    int n = opt<int>("n");
    assert(1 <= n && n <= 1000000);
    assert(t * n <= 1000000);

    std::string maxc = opt<std::string>("maxc");
    assert(maxc.length() == 1);
    assert('a' <= maxc[0] && maxc[0] <= 'z');

    println(t);

    while (t--) {
        println(n);

        // [a-z]{1000000}
        println(rnd.next("[a-" + maxc + "]{" + std::to_string(n) + "}"));
    }
    return 0;
}
