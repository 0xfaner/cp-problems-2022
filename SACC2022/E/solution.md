# 循环法阵

可以发现节点之间串联形成了一个个环。使用并查集或 DFS 可以统计出每个环的大小。

要统计所有排列种数，直接计算所有的环的大小的最小公倍数即可。而最后的结果可能很大，因此无法直接计算，需要进行优化。

具体地，我们首先求出每一个环的大小 $x_i$，然后对 $x_i$ 分解质因数，统计每一类质因数的出现次数的最大值即可。
