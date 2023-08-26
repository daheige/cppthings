#include <iostream>
#include <cmath> // 数学函数相关的包
#include <string>
using namespace std;

// TAX_RATE 全局常量，放在所有include之后，放在所有函数声明之前
const double TAX_RATE = 0.05;

// 函数声明，通常放在main部分之前
// 返回花费的总价
double total_cost(int number, double price_per);

// 判断是否是管理员
bool is_admin(string name);
// bool is_admin(string); // 可以不列出形参的名称，跟上面是等价的函数声明

// 函数重载，也就是一个函数可以有多个签名
// 函数参数个数或形参类型，或两者都有，这样的函数两个及其以上的函数就是函数重载
double ave(int a, int b);
double ave(int a, int b, int c);
double ave(double a, double b, double c);
double ave(int a, double b, double c);

int main()
{
    double budget, area, length_side;
    const double COST_PER_SQ_FT = 10.50;
    cout << "enter the amount budgeted for your dog house $";
    cin >> budget;
    area = budget / COST_PER_SQ_FT;
    length_side = sqrt(area);
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint); // 显示小数点
    cout.precision(2);         // 保留2位小数
    cout << "for a price of $" << budget << endl
         << "i can build you a luxurious square dog house\n"
         << "that is " << length_side
         << " feet on each side.\n";

    cout << "total cost: " << total_cost(10, 10.12) << endl;
    cout << "heige is admin: " << is_admin("heige") << endl;

    /**
     * ave(1,2) = 2.05
     * ave(1,2,3) = 8.05
     * ave(1.1,2.1,3.2) = 8.55
     */

    cout << "ave(1,2) = " << ave(1, 2) << endl;
    cout << "ave(1,2,3) = " << ave(1, 2, 3) << endl;
    cout << "ave(1.1,2.1,3.2) = " << ave(1.1, 2.1, 3.2) << endl;

    return 0;
}

// 函数定义
// 一般放在main之后
double total_cost(int number, double price_per)
{
    double subtotal = price_per * number;
    subtotal = subtotal * TAX_RATE;
    return subtotal;
}

bool is_admin(string name)
{
    if (name == "daheige" || name == "heige")
    {
        return true;
    }

    return false;
}

double ave(int a, int b)
{

    return TAX_RATE * a + b;
}

double ave(int a, int b, int c)
{
    return TAX_RATE * a + b + 2 * c;
}

double ave(double a, double b, double c)
{
    return TAX_RATE * a + b + 2 * c;
}

double ave(int a, double b, double c)
{
    return TAX_RATE * a + b + 2 * c * 1.2;
}

/**
 * % ./func.out
enter the amount budgeted for your dog house $123
for a price of $123.00
i can build you a luxurious square dog house
that is 3.42 feet on each side.
total cost: 5.06
heige is admin: 1
ave(1,2) = 2.05
ave(1,2,3) = 8.05
ave(1.1,2.1,3.2) = 8.55
*/
