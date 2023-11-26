# Permutation-and-Combination  

#  目录  
- [简介](#简介)  
- [使用方法](#使用方法)  
- [其他](#其他)  
#  简介  

这是什么?  
这是一个头文件"permcomb.h"   

定义了两个函数  

```c
Long Long P(int n,int k);
Long Long C(int n,int k);
```

用来计算排列和组合  

什么你不知道什么是排列和组合?  

[wiki-排列](https://zh.wikipedia.org/wiki/%E6%8E%92%E5%88%97)   [wiki-组合](https://zh.wikipedia.org/wiki/%E7%B5%84%E5%90%88#cite_ref-1)

# 使用方法  

首先是排列  

```c
P(int n,int k);
```

n为所有元素数，k为取出的元素数  

返回k个元素的排列数量(long long类型)  
注: $n\in[0,20],k\in[0,20]$ 如果不在这个范围视为违法,返回-1  

其次是组合  

```c
C(int n,int k);
```

n为所有元素数，k为取出的元素数  

返回k个元素的组合数量(long long类型)  

注: $n\in[0,20],k\in[0,20]$ 如果不在这个范围视为违法,返回-1  

# 其他  

为什么只支持到20?因为Long Long类型只能存下 $20!$   

菜狗大学生随便写的，代码很简单，主要还是试试markdown怎么写~  
