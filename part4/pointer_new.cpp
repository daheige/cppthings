#include <iostream>
#include <string>
using namespace std;

// 结构体定义
struct inflatable {
    string name;
    float volume;
    double price;
};

int main() {
    // 如何使用指针来管理运行阶段的内存空间分配
    // 使用new来分配内存
    // 告诉程序需要多少存储int的内存，也就是说根据类型来确定多少字节的内存
    // p是被声明为指向int的指针，*p是存储在x那里的值
    // 为一个数据对象获取并指定分配内存的格式：typename * pointer_name = new
    // typename
    int* p = new int;  // 分配内存是程序运行时进行的，new分配的内存在堆heap上
    int x = 12;
    p = &x;
    *p = 13;  // 解引用赋值，这里会将x的值改成13

    // 使用delete释放内存
    // 在需要内存的时候，通过new来分配，在不需要内存后，将其归还使用delete处理
    // 使用delete时候，后面要加上指向内存块的指针（new分配的内存地址）
    // 只能用delete来释放使用new分配的内存。然而，对空指针使用delete是安全的。
    int* ps = new int;
    delete ps;

    int d = 12;
    cout << "d is: " << d << endl;

    // 使用new来创建动态数组
    int* psome = new int[10];
    delete[] psome;  // 使用完毕后，释放内存

    int* p3 = new int[3];
    p3[0] = 1;  // 使用方括号数组表示法等同于对指针解除引用
    p3[1] = 2;
    p3[2] = 3;
    cout << "p3[2] = " << p3[2] << endl;

    // 使用new创建动态结构
    inflatable* a = new inflatable;
    a->name = "daheige";  // 通过->访问元素
    a->price = 123;
    a->volume = 12.01;

    cout << "name: " << a->name << " price: " << a->price
         << " vol: " << a->volume << endl;

    return 0;
}