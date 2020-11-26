# c++ study notes

    基于c++入门经典第9版和c++高级编程第4版学习
    c++版本，选择c++11,c++17

# 为什么要重新学习 c/c++

    时隔2012年快9年了，大学学习的 c,c++都忘记得差不多了。
    这几年，自己一直从事 php+nodejs 的工作，之前为了搞懂 php 内核以及底层的设计原理，不得不硬着头皮看了好几天的c语言基础，
    然后一股脑的扎进 php 源码研究，结果处处碰壁。

    直到 2018 年，转向 golang 的开发后，稍微有些改善，对于 php 内核一些不能理解的东西，突然明白了很多。
    不过总的来说，还是不够，因为计算机操作系统，内存分配，数据存放，数据结构一直以来都是开发人员的短板，包括我自己。
    做了一年半左右的 golang 开发，切身体会到这些东西任然很重，特别是mysql/redis/nginx源码大部分都是基于c/c++，
    基于对c/c++的好奇，以及为搞懂底层设计原理，决定重新学习c++，增强自己对于操作系统，内存分配，数据结构的理解。

# c++编译时别名

    vim ~/.bash_profile 或 vim ~/.bashrc
    alias gc11="gcc -lstdc++ -std=c++11"
    alias gc17="gcc -lstdc++ -std=c++17"
    alias g11="g++ -std=c++11"
    alias g17="g++ -std=c++17"

    source ~/.bash_profile

    编译的时候： g11 -o vector.out vector.cpp
