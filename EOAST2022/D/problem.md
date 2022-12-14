# 祖玛游戏

1000ms  262144K

## Description

咕咕在玩一个特别的祖玛游戏。

初始时场上有若干珠子排成一行，每个珠子的要么是黑色的，要么是白色的，要么是无色的。并且，黑色与白色的珠子上会刻有一个整数。

当两颗珠子 $x$ 和 $y$ 相邻时（$x$ 在左，$y$ 在右），如果 $x$ 为黑色，$y$ 为白色，且 $x$ 和 $y$ 上的整数相等，那么这两个珠子会自动被消除，之后两边珠子将会拼接在一起。

游戏开始前，咕咕可以对每一个无色珠子使用魔法，让其变成黑色或白色，并指定其上刻有的整数。运气好的话，咕咕可以恰好让所有的珠子自动被消除。

现在咕咕想考考你，对于给定的珠串，咕咕有多少种对无色珠子使用魔法的方案，使得恰好让所有的珠子自动被消除？

## Input

第一行一个整数 $t$，表示有 $t$ 组测试用例。

接下来 $t$ 组测试用例，每组测试用例共两行。

第一行包含两个整数 $n, m$，表示棋盘上有 $n$ 个珠子，以及珠子所刻整数的合法范围为 $[1,m]$。

第二行 $n$ 个整数 $a_i$，表示每一颗珠子。当 $a_i > 0$ 该珠子颜色为黑色，所刻整数为 $a_i$；当 $a_i < 0$ 该珠子颜色为白色，所刻整数为 $-a_i$；当 $a_i = 0$ 该珠子无色（$-m \leq a_i \leq m$）。

输入数据保证 $\sum n \leq 10^3$ 且 $n$ 为偶数。

对于 $30\%$ 的数据，$t \leq 10, \leq 10, m = 1$。

对于 $100\%$ 的数据，$1 \leq t \leq 100, 2 \leq n \leq 500, 1 \leq m \leq 10^9$。

## Output

对于每组测试用例，输出一行，唯一的一行里包含一个整数，表示方案数（对 $10^9 + 7$ 取模）。

## Sample Input

```
2
4 2
1 0 0 -1
6 3
0 0 0 0 0 0
```

## Sample Output

```
3
135
```

## Note

在样例的第一组测试用例中，共有 $3$ 种方案：

第一种：`1 1 -1 -1`

第二种：`1 2 -2 -1`

第三种：`1 -1 1 -1`
