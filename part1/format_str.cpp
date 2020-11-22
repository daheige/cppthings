#include <iostream>
using namespace std;
int main()
{
    cout << "c:\\files\\" << endl;
    cout << "hello world";
    double price = 78.5;
    // 魔法配方
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2); // 保留2位小数
    cout << "the price is $" << price << endl;

    double a = 12.3455;
    cout.precision(3);
    cout << "a is $" << a << endl;

    // cin/cout 输入和输出操作
    int cost_price;
    cout << "enter the cost price: ";
    cin >> cost_price;
    cout << "price is: " << cost_price;

    return 0;
}