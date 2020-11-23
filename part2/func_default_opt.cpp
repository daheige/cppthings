#include <iostream>
#include <string>
using namespace std;

// 在函数声明中给出默认参数
void hello(string name, int page = 1, int limit = 20);

int main()
{
    hello("test");
    hello("test", 3);
    hello("daheige", 2, 30);
    hello("daheige2", 2, 30);
}

// 函数定义的时候不需要默认赋值
// 如果函数只有定义，则默认参数才可出现在函数定义中
void hello(string name, int page, int limit)
{
    cout << "name is " << name;
    int offset = (page - 1) * limit;
    cout << "offset is " << offset << endl;
}
