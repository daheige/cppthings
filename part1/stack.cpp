#include <iostream>

using namespace std;

struct Emp
{
    string name;
    int age;
};

int main()
{
    int *p; // int指针类型，指向某个整数的内存 可将指针看成指向动态分配堆上内存的一个箭头
    // 建议声明和赋值，未初始化的指针，指向内存中的任意位置
    *p = 123;

    cout << "p value is " << p << endl; // p value is 0x7ffeebd0f358 p的值就是一个指针地址
    cout << "*p value is " << *p << endl;

    // 采用new分配内存
    int *q = new int;
    *q = 12; // *q对指针解引用操作，取值，这里不是改变q本身，而是改变了指针所指向的内存
    cout << "*q value is " << *q << endl;

    // 当不再使用new动态分配的内存，建议用delete释放掉，
    // 为了防止释放的指针指向的内存后再使用指针，建议把指针设置为nullptr
    delete q;
    q = nullptr; // 赋值给空指针常量

    int x = 8;
    int *yPtr = &x; // &取地址操作，指针北非总是指向堆内存，可以指向一个堆栈中变量，甚至指针的指针
    cout << "*y value is " << *yPtr << endl;

    Emp *anEmp;
    Emp e;
    e.name = "heige";
    anEmp = &e;
    cout << "emp name is " << anEmp->name << endl; // -> 自动解引用，访问字段

    bool isValidEmp = anEmp && anEmp->age > 0;
    cout << "emp check is " << isValidEmp << endl; // emp check is 0

    // 动态分配的数组
    int arrsize = 8;
    // 每次调用new,需要后面调用delete操作，避免内存泄漏
    int *myarr = new int[arrsize]; // 分配的内存可以放8个int数字
    myarr[3] = 2;
    cout << "myarr[3] is " << myarr[3] << endl;

    // 释放分配的内存
    delete[] myarr;
    myarr = nullptr;

    // 智能指针
    // unique_ptr 类似于普通指针，但在unique_ptr超出作用域或被删除时候，会自动释放内存或资源 始终都会自动释放
    // shared_ptr 只属于它指向的对象 make_shared<T>() 是一个模版
    // 允许数据分布式的所有权，通过引用计数来释放指针引用的对象
    auto anEmp2 = make_unique<Emp>(); // 是一个通用的智能指针，可以指向任意类型的内存，是一个模版
    if (anEmp2)
    {
        anEmp2->name = "daheige";
        cout << "hello" << endl;
        cout << "name is " << anEmp2->name << endl;
    }

    return 0;
}

/**
% g17 -o stack.out stack.cpp
heige@daheige part1 % ./stack.out
p value is 0x7ffee3166358
*p value is 123
*q value is 12
*y value is 8
emp name is heige
emp check is 0
myarr[3] is 2
*/