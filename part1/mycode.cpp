#include <iostream>
#include "mycode.h" // 引入自定义的命名空间
using namespace std;

int main()
{
    mycode::say_hello("heige");
    return 0;
}

// 实现mycode命名空间里面的say_hello函数
void mycode::say_hello(string name)
{
    cout << "your name is: " << name << endl;
}
