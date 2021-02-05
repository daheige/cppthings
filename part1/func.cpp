#include <iostream>
#include "func.h"
using namespace std;

int main()
{
    int a = 1;
    cout << "a is " << a << endl;
    say_hello("heige");
    printString("hello world");

    // try...catch捕捉异常
    try
    {
        cout << "3/2 = " << divide(3, 2) << endl;
        cout << "3/0 = " << divide(3, 0) << endl;
    }
    catch (const invalid_argument &e) // 参数错误
    // catch (const exception &e)
    {
        cerr << e.what() << '\n';
    }

    return 0;
}

// 函数实现
void say_hello(string name)
{
    cout << "name is " << name << endl;
}

// const引用传递，参数给函数时候，传递的是指向原始数据的指针
// 如果要改变参数的值，建议用传递非const引用
void printString(const string &mystr)
{
    cout << "my str is " << mystr << endl;
}

double divide(double x, double y)
{
    if (y == 0)
    {
        throw invalid_argument("y can not be 0.");
    }

    return x / y;
}