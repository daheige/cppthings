#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    // cmath函数使用
    cout << "3 * 3 = " << pow(3, 2) << endl;
    cout << "abs(-3) = " << abs(-3) << endl; // abs在cstdlib包中
    cout << "ceil(9.08) = " << ceil(9.08) << endl;
    srand(time(0)); // time函数在ctime中

    // rand 返回int类型的随机整数
    cout << "rand num is " << rand() << endl;
    int rnd = rand() % 6 + 1; // 生成1-6之间的数字
    cout << "num rnd: " << rnd << endl;
    cout << "1-100 rnd: " << rand() % 100 + 1 << endl;

    cout << "floor(8.91) = " << floor(8.91) << endl; // 8
    cout << "ceil(8.91) = " << ceil(8.91) << endl;   // 9

    cout << "没有强制转换的时候，返回值是int类型，9/2 = "
         << 9 / 2 << endl; // 没有强制转换的话，结果是int

    // 将int类型的值强制转化为double类型,将9强制转化为9.0
    // 类型转化一般是使用static_cast<type>(x) 格式
    double answer = static_cast<double>(9) / 2; // 9/2 = 4.5
    cout << "采用static_cast强制转换后，9/2 = " << answer << endl;

    return 0;
}
/*output:
3 * 3 = 9
abs(-3) = 3
ceil(9.08) = 10
rand num is 998776234
num rnd: 1
1-100 rnd: 15
floor(8.91) = 8
ceil(8.91) = 9
没有强制转换的时候，返回值是int类型，9/2 = 4
采用static_cast强制转换后，9/2 = 4.5
*/