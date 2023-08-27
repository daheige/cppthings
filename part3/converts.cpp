#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    a = 19.9 + 11.1;
    cout << "a = " << a << endl;

    // 强制类型转换
    b = (int)19.1 + (int)11.9; // 30
    cout << "b = " << b << endl;

    // 采用 static_cast<type>(x)方式强制转换，将x从某个类型转换为type类型
    c = static_cast<int>(19.01);
    cout << "c = " << c << endl;

    // auto自动推断类型
    auto x = 12;   // int类型
    auto y = 12.3; // double类型
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    return 0;
}