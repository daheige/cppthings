#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
    char str[30] = "abc";
    cout << "str = " << str;

    // 字符串拼接，c风格
    strcat(str, "abc");
    cout << "str = " << str << " ok" << endl;

    char c[] = "Hello ";
    char desc[] = "abcdefg";
    // 需要引入string
    strncat(c, desc, sizeof(desc) - 2);

    cout << "str = " << c;

    cout << "str len: " << strlen(c);

    int i;
    double d;
    string s;

    d = stof("12.234");

    i = atoi("1234"); // 转化为int
    s = to_string(d); // 转化为字符串格式

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "d = " << d << endl;
    cout << "i = " << i << endl;
    cout << "s = " << s << endl;

    return 0;
}