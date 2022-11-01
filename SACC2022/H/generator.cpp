#include <bits/stdc++.h>

#include "../testlib.h"

std::string int2TileSting(int x) {
    if (x < 9) {
        return std::to_string(x + 1) + "m";
    }
    if (x < 18) {
        return std::to_string(x - 8) + "s";
    }
    if (x < 27) {
        return std::to_string(x - 17) + "p";
    }
    if (x < 34) {
        return std::to_string(x - 26) + "z";
    }
    throw("unexcept n");
}

void generateNormal(int kind) {
    int cnt[34];
    memset(cnt, 0, sizeof(cnt));
    std::array<std::string, 13> arr;
    for (auto& it : arr) {
        int x, k;
        do {
            x = rnd.next(34);
            k = x < 9 ? 0 : x < 18 ? 1 : x < 27 ? 2 : 3;
        } while (cnt[x] >= 4 || !(kind & (1 << k)));
        cnt[x]++;
        it = int2TileSting(x);
    }
    println(arr);
}

void generateCustom() {
    println("13");
    println("1m 9m 1s 9s 1p 9p 1z 2z 3z 4z 5z 6z 1m");
    println("1m 9m 1s 9s 1p 9p 1z 2z 3z 4z 5z 6z 9m");
    println("1m 9m 1s 9s 1p 9p 1z 2z 3z 4z 5z 6z 1s");
    println("1m 9m 1s 9s 1p 9p 1z 2z 3z 4z 5z 6z 9s");
    println("1m 9m 1s 9s 1p 9p 1z 2z 3z 4z 5z 6z 1p");
    println("1m 9m 1s 9s 1p 9p 1z 2z 3z 4z 5z 6z 9p");
    println("1m 9m 1s 9s 1p 9p 1z 2z 3z 4z 5z 6z 1z");
    println("1m 9m 1s 9s 1p 9p 1z 2z 3z 4z 5z 6z 2z");
    println("1m 9m 1s 9s 1p 9p 1z 2z 3z 4z 5z 6z 3z");
    println("1m 9m 1s 9s 1p 9p 1z 2z 3z 4z 5z 6z 4z");
    println("1m 9m 1s 9s 1p 9p 1z 2z 3z 4z 5z 6z 5z");
    println("1m 9m 1s 9s 1p 9p 1z 2z 3z 4z 5z 6z 6z");
    println("1m 9m 1s 9s 1p 9p 1z 2z 3z 4z 5z 6z 7z");
}

int main(int argc, char** argv) {
    registerGen(argc, argv, 1);

    int kind = opt<int>("kind");
    assert(0 <= kind && kind < 16);

    if (kind == 0) {
        generateCustom();
        return 0;
    }

    int t = opt<int>("t");
    println(t);

    while (t--) {
        generateNormal(kind);
    }
    return 0;
}
