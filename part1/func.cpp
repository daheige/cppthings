#include <iostream>
#include "func.h"
using namespace std;

int main()
{
    int a = 1;
    cout << "a is " << a << endl;
    say_hello("heige");
    return 0;
}

// 函数实现
void say_hello(string name)
{
    cout << "name is " << name << endl;
}