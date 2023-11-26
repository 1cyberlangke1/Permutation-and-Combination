# Permutation-and-Combination  

# 语言  
[English by ChatGPT3.5](#Directory)     [简体中文](#目录)   

#  目录  
- [简介](#简介)  
- [使用方法](#使用方法)  
- [其他](#其他)  

#  简介  

这是什么呀~ (*≧ω≦)  
这是一个头文件 "permcomb.h" 呢~ (｡♥‿♥｡)  
定义了两个函数哦~ (｡♥‿♥｡)  

```c
Long Long P(int n, int k);
Long Long C(int n, int k);
```

它们是用来算排列和组合的啦~ (￣▽￣)~*  

诶呀呀，你不知道排列和组合是啥吗？ ԅ(≖‿≖ԅ)  

[wiki-排列](https://zh.wikipedia.org/wiki/%E6%8E%92%E5%88%97)    [wiki-组合](https://zh.wikipedia.org/wiki/%E7%B5%84%E5%90%88#cite_ref-1)

# 使用方法  

首先来看看排列吧~ (◕‿◕✿)  

```c
P(int n, int k);
```

n是所有元素数，k是取出的元素数~ ʚ♡⃛ɞ  

会返回k个元素的排列数量哦~ (⁄ ⁄•⁄ω⁄•⁄ ⁄)⁄  

注意啦~  $n\in[0,20], k\in[0,20]$   不在这范围内的话就是违法的啦，会返回-1的哦~  

接下来是组合~ (´∩｡• ᵕ •｡∩`)   

```c
C(int n, int k);
```

n是所有元素数，k是取出的元素数~ (⁄ ⁄>⁄ ▽ ⁄<⁄ ⁄)  

返回的是k个元素的组合数量喔~ (*/▽＼*)  

注意哦~ $n\in[0,20], k\in[0,20]$ 喔~ 不在这范围内是违法滴，会返回-1的喔~  

# 其他  

为啥只支持到20呀？因为 Long Long 类型只能存下 $20!$ 啦~ (╯3╰)  

这是一位菜狗的大学生写的啦，代码好简单滴，主要是想试试markdown怎么写的呢~ (¬‿¬)✨  
    
 # language  
 [English by ChatGPT3.5](#Directory)     [简体中文](#目录)   

   

# Directory  
- [Introduction](#introduction)  
- [Usage](#usage)  
- [Other](#other)  

# Introduction  

What's this all about~ (*≧ω≦)  
This is a header file called "permcomb.h"~ (｡♥‿♥｡)  
It defines two functions~ (｡♥‿♥｡)  

```c
Long Long P(int n, int k);
Long Long C(int n, int k);
```

They're used for calculating permutations and combinations~ (￣▽￣)~*  

Oh my, you don't know what permutations and combinations are? ԅ(≖‿≖ԅ)  

[Permutations - Wikipedia](https://en.wikipedia.org/wiki/Permutation)    [Combinations - Wikipedia](https://en.wikipedia.org/wiki/Combination)

# Usage  

Let's first take a look at permutations~ (◕‿◕✿)  

```c
P(int n, int k);
```

n is the total number of elements, k is the number of elements taken~ ʚ♡⃛ɞ  

It returns the number of permutations of k elements~ (⁄ ⁄•⁄ω⁄•⁄ ⁄)⁄  

Pay attention~  $n\in[0,20], k\in[0,20]$   If it's not in this range, it's considered illegal and will return -1~  

Next up is combinations~ (´∩｡• ᵕ •｡∩`)  

```c
C(int n, int k);
```

n is the total number of elements, k is the number of elements taken~ (⁄ ⁄>⁄ ▽ ⁄<⁄ ⁄)  

It returns the number of combinations of k elements~ (*/▽＼*)  

Be careful~ $n\in[0,20], k\in[0,20]$ Okay~ If it's not in this range, it's considered illegal, and -1 will be returned~  

# Other  

Why only support up to 20? Because the Long Long type can only handle up to  $20!$  ~ (╯3╰)  

This was written by a college student who's still learning, the code is quite simple~ Mainly wanted to try out how to write in markdown~ (¬‿¬)✨  
