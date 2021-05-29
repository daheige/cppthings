// new
// Created by daheige on 2021/2/28.
#include <iostream>

using namespace std;

int main()
{
    int *p = new int;
    //    // 释放堆上的内存
    //    delete p;
    //    p = nullptr;

    int q = 1;
    p = &q;
    cout << "p = " << p << endl;
    cout << "q = " << q << endl;
    *p = 12;
    cout << "q = " << q << endl;
    cout << "p = " << p << endl;

    return 0;
}

/* p 是一个int类型的指针变量
 * p指向q变量的指针地址
 * 改变*p就会改变q的值
 * p = 0x7ffee9a9e42c
q = 1
q = 12
p = 0x7ffee9a9e42c
 */
