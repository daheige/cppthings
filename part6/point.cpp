#include <iostream>
using namespace std;

int main()
{
    int *p, *q;  // 声明指针变量 int类型的指针变量
    p = new int; // new创建指定类型的一个新动态变量，返回指向新变量的指针，就是指向int类型变量的指针
    *p = 12;
    int d;
    p = &d;   // 将d变量的地址赋值给p,p->&d，此时p和d变量的地址指向一个位置
    *p = 123; // 当解引用实际上获得了d的值，这个时候改变为123，实际上d的值就变化为123

    cout << "d = " << d << endl;
    cout << "p = " << p << endl;
    cout << "*p = " << *p << endl;
    int m = 10;
    q = &m; // 将变量m的地址
    *q = 20;

    cout << "q = " << q << endl;
    cout << "m = " << m << endl;

    return 0;
}

/**
 * % ./point.out               
d = 123
p = 0x7ffee512b124
*p = 123
q = 0x7ffee512b120
m = 20
*/
