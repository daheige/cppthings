#include <cstring>  // 主要用于c-style字符串操作
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "hello";
    string s1 = ",world";
    // 字符串拼接可以直接用+进行
    s += s1;
    cout << "s is: " << s << endl;  // s is: hello,world

    // 对于c-style风格的字符串拼接
    char str1[] = "hello";
    char str2[] = ",world";
    strcat(str1, str2);  // hello,world
    cout << "c-style风格拼接之后的字符串: " << str1 << endl;

    return 0;
}