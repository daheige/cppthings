#include <iostream>
using namespace std;

// 指针
// 指针是一个变量，其存储的是值的地址，而不是值本身
// 获取变量的地址，只需要对变量应用地址运算符&，就可以获取变量的位置

int main() {
    int donuts = 6;
    double cpus = 4.5;
    cout << "donuts value = " << donuts << endl;
    cout << "donuts address = " << &donuts << endl;
    cout << "cpus value = " << cpus << endl;
    // 取地址 cpus address = 0x7ff7b3be1fe0
    // 显示地址时，该实现的cout使用十六进制表示法，因为这是常用于描述内存的表示法
    cout << "cpus address = " << &cpus << endl;

    int *p, *q;  // 声明指针变量 int类型的指针变量，变量p,q是一个指针变量
    p = new int;  // new创建指定类型的一个新动态变量，返回指向新变量的指针，就是指向int类型变量的指针
    *p = 12;      // *解引用

    int d;
    // 将d变量的地址赋值给p,p->&d，此时p和d变量的地址指向一个位置
    // 通过&获取变量d的地址
    p = &d;
    // 当解引用实际上获得了d的值，这个时候改变为123，实际上d的值就变化为123
    *p = 123;

    cout << "d = " << d << endl;
    cout << "p = " << p << endl;
    cout << "*p = " << *p << endl;
    int m = 10;
    q = &m;   // 将变量m的地址赋值给指针变量q
    *q = 20;  // 解引用，实际上给m赋值为20

    cout << "q = " << q << endl;  // q是一个指针类型，值是一个指针
    cout << "m = " << m << endl;

    // 指针在声明必须指定指针指向的数据的类型
    int jumbo = 23;
    // *pe 类型是int,由于*运算符被用于指针，解引用，因此pe变量本身必须是指针
    // pe是指向jumbo变量的内存地址，pe是指针类型
    // 这里需要强调一点：int*是一种类型，指向int的指针
    // int*,int *在哪里添加空格对于编译器来说没有任何区别
    int* pe = &jumbo;
    cout << "jumbo = " << jumbo << endl;
    cout << "pe = " << pe << endl;

    return 0;
}

/*% g11 point.cpp
% ./a.out
donuts value = 6
donuts address = 0x7ff7b510efe8
cpus value = 4.5
cpus address = 0x7ff7b510efe0
d = 123
p = 0x7ff7b510efcc
*p = 123
q = 0x7ff7b510efc8
m = 20
*/
