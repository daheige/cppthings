#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    // cmath函数使用
    cout << "3 * 3 = " << pow(3, 2) << endl;
    cout << "abs(-3) = " << abs(-3) << endl; // cstdlib
    cout << "ceil(9.08) = " << ceil(9.08) << endl;
    srand(time(0)); // time函数在ctime中
    cout << "rand num is " << rand() << endl;
    int die = rand() % 6 + 1; // 生成1-6之间的数字
    cout << "die rnd: " << die << endl;
    cout << "1-100 rnd: " << rand() % 100 + 1 << endl;

    cout << "floor(8.91) = " << floor(8.91) << endl;

    // 将int类型的值强制转化为double类型,将9强制转化为9.0
    // 类型转化一般是使用static_cast<type>xx 格式
    double answer = static_cast<double>(9) / 2; // 9/2 = 4.5
    cout << "9/2 = " << answer << endl;

    return 0;
}