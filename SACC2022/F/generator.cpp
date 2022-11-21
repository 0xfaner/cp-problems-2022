#include <bits/stdc++.h>

#include "../testlib.h"

std::string getPalindromicString(int n, std::string maxc) {
    std::string ret = rnd.next("[a-" + maxc + "]{" + std::to_string(n) + "}");
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        ret[j] = ret[i];
    }
    return ret;
}

int main(int argc, char** argv) {
    registerGen(argc, argv, 1);

    int kind = opt<int>("kind");
    assert(0 <= kind && kind <= 1);

    int t = opt<int>("t");
    assert(1 <= t && t <= 1000);

    int n = opt<int>("n");
    assert(1 <= n && n <= 1000000);
    assert(t * n <= 1000000);

    if (kind == 0) {
        std::string maxc = opt<std::string>("maxc");
        assert(maxc.length() == 1);
        assert('a' <= maxc[0] && maxc[0] <= 'z');

        println(t);

        while (t--) {
            println(n);

            // [a-z]{1000000}
            println(rnd.next("[a-" + maxc + "]{" + std::to_string(n) + "}"));
        }
    } else {
        assert(n >= 10);

        std::string maxc = opt<std::string>("maxc");
        assert(maxc.length() == 1);
        assert('a' <= maxc[0] && maxc[0] <= 'z');

        println(t);

        while (t--) {
            println(n);

            int sel = rnd.next(2);
            if (sel == 0) {
                int m = rnd.next(3, 10);

                std::string fmt = getPalindromicString(m, maxc);
                std::string str(n, '*');
                for (int i = 0; i < n; i++) {
                    str[i] = fmt[i % m];
                }
                println(str);
            } else if (sel == 1) {
                int m = rnd.next(1, n / 2);

                std::string fmt = getPalindromicString(m, maxc);
                std::string str(n, '*');
                for (int i = 0; i < n; i++) {
                    str[i] = fmt[i % m];
                }
                println(str);
            }
        }
    }
    return 0;
}
