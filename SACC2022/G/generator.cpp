#include <bits/stdc++.h>

#include "../testlib.h"

int main(int argc, char** argv) {
    registerGen(argc, argv, 1);

    int n = opt<int>("n");
    assert(1 <= n && n <= 100000);
    int m = opt<int>("m");
    assert(1 <= m && m <= 100000);

    int maxd = opt<int>("maxd");
    assert(0 <= maxd && maxd <= 9);

    println(n, m);

    // [0-9]{100000}
    println(rnd.next("[0-" + std::to_string(maxd) + "]{" + std::to_string(n) + "}"));

    while (m--) {
        int t = rnd.next(1, 2);
        if (t == 1) {
            int w = rnd.wnext(1, 2, 2);
            if (n <= 100 || w == 1) {  // random
                int l = rnd.next(1, n);
                int r = rnd.next(1, n);
                if (l > r) {
                    std::swap(l, r);
                }
                println(t, l, r);
            } else if (w == 2) {  // small interval
                int len = rnd.next(0, 100);
                int l = rnd.next(1, n - len);
                int r = l + len;
                println(t, l, r);
            }
        } else if (t == 2) {
            int x = rnd.next(1, n);
            int y = rnd.next(0, 9);
            println(t, x, y);
        }
    }

    return 0;
}
