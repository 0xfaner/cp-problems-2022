# 喷涂面积

1000ms  262144K

## Description

咕咕最近沉迷于《斯普拉顿3》这天，咕咕梦见自己进入了《斯普拉顿3》的世界，在这里，她将使用自己独特的墨汁武器在这个世界乱喷一气！

咕咕手中的墨汁武器的效果为，以命中的位置为中心进行散射，让墨汁恰好涂满一个矩形区域。

现在咕咕向训练场地的墙壁发射了两发炮弹，你能告诉她现在墙上有多大面积的区域被喷涂了吗？

## Input

第一行一个整数 $t$，表示有 $t$ 组测试用例。

接下来 $t$ 组测试用例，每组测试用例共两行。

第 $i$ 行包含四个整数 $a_i,b_i,c_i,d_i$，表示第 $i$ 次发射涂满的矩形区域的左下角的坐标为 $(a_i,b_i)$，右上角的坐标为 $(c_i,d_i)$，且该矩形各边与坐标轴水平或垂直。

对于 $30\%$ 的数据，$t = 1, a_i,b_i,c_i,d_i \leq 10^2$。

对于 $70\%$ 的数据，$t \leq 10^2, a_i,b_i,c_i,d_i \leq 10^3$。

对于 $100\%$ 的数据，$1 \leq t \leq 10^5, 0 \leq a_i,b_i,c_i,d_i \leq 10^9$。

## Output

对于每组测试用例，输出一行，唯一的一行里包含一个整数，表示被喷涂区域的面积之和。

## Sample Input

```
1
0 1 3 2
1 0 2 3
```

## Sample Output

```
5
```
