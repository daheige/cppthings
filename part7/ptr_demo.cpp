// 内存管理
// Created by daheige on 2021/5/30.
#include <iostream>

using namespace std;

class Simple {
public:
    Simple (int m) {
        x = m;
        cout << "init constructor called" << endl;
        cout << "x = " << x << endl;
    }

    Simple () {
        cout << "init no args constructor called" << endl;
    }

private:
    int x;
};

int main () {
    // 分配和释放
    int *a = new int; // int指针类型
    int b = 12;
    *a = 1;

//    a = &b; // a--->&b a指向b的内存地址
//    b = 13;
//    cout << "a is " << a << endl;
//    cout << "b = " << b << endl;
//    *a = 15; // 改变a指向的内存地址对应的值，那么b也会跟着一起变化
    cout << "a is " << a << endl; // a is 0x7ffe685040c0

    // 当堆上的内存不再使用的时候，调用delete释放堆上a的内存
    delete a;
    a = nullptr;
    cout << "b = " << b << endl;
    cout << "a is " << a << endl; // a is 0x0

    // c风格的数组指针
    int *myArr = new int(5); // 分配的内存可以放5个int数字

    myArr[0] = 12;
    myArr[1] = 123;
    cout << "myArr[0] = " << myArr[0] << endl;
    cout << "myArr[2] = " << myArr[2] << endl; // 0，初始化值是0
    // 释放内存，并赋值为空指针
    delete[] myArr;
    myArr = nullptr;

    cout << "clean all" << endl;

    // 对象的数组的指针分配
    Simple *mySimple = new Simple(4);
    Simple s; // 调用无参数的构造函数实例化对象

    mySimple[0] = Simple(1);
    mySimple[1] = Simple(2);
    mySimple[2] = Simple(3);
    mySimple[3] = s;

    delete[] mySimple;
    mySimple = nullptr;

    cout << "ok" << endl;

    return 0;
}

/**
% ./ptr_demo.out
a is 0x7fa439e04080
b = 12
a is 0x0
myArr[0] = 12
myArr[2] = 0
clean all
init constructor called
x = 4
init no args constructor called
init constructor called
x = 1
init constructor called
x = 2
init constructor called
x = 3
ok
 */