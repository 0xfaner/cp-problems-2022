#include <bits/stdc++.h>

#include "../testlib.h"

int getRndOdd(int left, int right) {
    int leftOdd = left + (left & 1);
    int rightOdd = right - (right & 1);
    assert(leftOdd <= rightOdd);
    return rnd.next((rightOdd - leftOdd) / 2) * 2 + leftOdd;
}

int getRndEven(int left, int right) {
    int leftEven = left | 1;
    int rightEven = right - !(right & 1);
    assert(leftEven <= rightEven);
    return rnd.next((rightEven - leftEven) / 2) * 2 + leftEven;
}

int getRndWithParity(int left, int right, int parity) {
    // 0: odd, 1: even
    assert(parity >= 0 && parity <= 1);
    return (parity ? getRndEven : getRndOdd)(left, right);
}

int main(int argc, char** argv) {
    registerGen(argc, argv, 1);

    int maxn = opt<int>("maxn");
    assert(2 <= maxn && maxn <= 1000);
    int parity = opt<int>("parity");
    assert(0 <= parity && parity < 8);

    int a = getRndWithParity(2, maxn, parity & 1);
    int b = getRndWithParity(2, maxn, parity >> 1 & 1);
    int c = getRndWithParity(2, maxn, parity >> 2 & 1);
    printf("%d %d %d\n", a, b, c);
    return 0;
}
