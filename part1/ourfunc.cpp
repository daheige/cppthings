#include <iostream>
using namespace std;
void simon(int);    // 函数原型签名定义
int stonetolb(int); // 有返回值的函数签名

int main()
{
    simon(3);
    int c;
    cin >> c;
    simon(c); // 无返回值的函数调用
    cout << "done." << endl;

    int s;
    cin >> s;
    int p = stonetolb(s); // 调用自定义的函数，它有返回值
    cout << p << " pounds." << endl;

    return 0;
}

// 函数定义，具体实现
// 没有返回值的函数用void修饰
void simon(int n)
{
    cout << "your toes " << n << " times" << endl;
}

int stonetolb(int n)
{
    return 12 * n;
}

/*
% g11 ourfunc.cpp
% ./a.out
your toes 3 times
12
your toes 12 times
done.
12
144 pounds.
*/