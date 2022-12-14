# 镜像符串

1000ms  262144K

## Description

咕咕非常喜欢镜像对称的东西，例如字符串 `ab` 和 `ba` 就是镜像对称的（将后者反转即可得到前者）。

现在咕咕手里有一个字符串 $s$，对于 $s$ 的某一个子串 $t$，咕咕对它的喜爱程度为：$s$ 的所有子串中，与 $t$ 镜像对称的子串的数量（允许该子串与 $t$ 完全或部分重叠）。

咕咕想请问你，对于该字符串的每一个前缀，咕咕对它的喜爱程度是多少。

## Input

第一行一个整数 $t$，表示有 $t$ 组测试用例（$1 \leq t \leq 10^3$）。

接下来 $t$ 组测试用例，每组测试用例共两行。

第一行一个整数 $n$，表示字符串的长度（$1 \leq n \leq 10^6$）。

第二行一个字符串 $s$，表示咕咕拥有的字符串（$s_i$ 为小写字母）。

输入数据保证 $\sum n \leq 10^6$。

## Output

对于每组测试用例，输出一行 $n$ 个整数，第 $i$ 个整数表示咕咕对 $s$ 的长度为 $i$ 的前缀的喜爱程度。

## Sample Input

```
2
3
aba
4
aaaa
```

## Sample Output

```
2 1 1
4 3 2 1
```

## Note

在样例的第一组测试用例中：

与 `a` 镜像对称的子串 `a` 出现了 $2$ 次。

与 `ab` 镜像对称的子串 `ba` 出现了 $1$ 次。

与 `aba` 镜像对称的子串 `aba` 出现了 $1$ 次。
