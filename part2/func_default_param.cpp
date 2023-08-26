#include <iostream>
#include <string>
using namespace std;

// 在函数声明中给出默认参数
void hello(string name, int page = 1, int limit = 20);

// 函数定义，这里没有先定义好函数原型
void foo(string name, int age = 30)
{
    cout << "your name is " << name << " age is " << age << endl;
}

int main()
{
    hello("test");
    hello("test", 3);
    hello("daheige", 2, 30);
    hello("daheige2", 2, 30);
    foo("daheige");
    foo("daheige", 31);
}

// 函数定义的时候不需要默认赋值，函数具体实现
// 如果函数没有先定义好原型，那默认参数才可出现在函数定义中
void hello(string name, int page, int limit)
{
    cout << "name is " << name;
    int offset = (page - 1) * limit;
    cout << "offset is " << offset << endl;
}