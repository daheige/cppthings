#include <cstring>
#include <iostream>
#include <string>

using namespace std;

int main() {
    // c语言风格的字符串定义
    // 本质上来说是char数组
    char dog[8] = "xiaohei";
    cout << "dog is: " << dog << endl;
    char str[30] = "abc";
    cout << "str = " << str;

    // 字符串拼接，c风格
    strcat(str, "abc");
    cout << "str = " << str << " ok" << endl;

    // 不指定长度声明字符串
    // 字符串常量声明
    char c[] = "Hello ";
    char desc[] = "abcdefg";
    // 字符串拼接
    // strlen(
    // )函数返回的是存储在数组中的字符串的长度，而不是数组本身的长度。另外，strlen()
    // 只计算可见的字符，而不把空字符计算在内。
    strncat(c, desc, sizeof(c) - strlen(c) - 1);
    cout << "c str = " << c;
    cout << "c str len: " << strlen(c);

    // c++ string定义
    // ISO/ANSI C++98标准通过添加string类扩展了C++库，因此现在可
    // 以string类型的变量（使用C++ 的话说是对象）而不是字符数组来存储字符串。
    // 您将看到，string类使用起来比数组简单，同时提供了将字符串作为一种数据类型的表示方法。
    int i;
    double d;
    string s;

    d = stof("12.234");  // 字符串数字转换为浮点数

    i = atoi("1234");  // 字符串数字转化为int
    s = to_string(d);  // 浮点数转化为字符串格式

    // 格式化展示
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "d = " << d << endl;
    cout << "i = " << i << endl;
    cout << "s = " << s << endl;

    string s1 = "abc";  // 直接定义string
    cout << "s1 is : " << s1 << endl;
    cout << "s1 len = " << s1.length() << endl;

    // raw原始字符串输出，使用R开头
    // 使用R"+*(标识原始字符串的开头时，必须使用)+*"标识原始字符串的结尾
    cout << R"(abc \nhello)" << endl;
    return 0;
}