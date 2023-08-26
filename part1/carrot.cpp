#include <iostream>
using namespace std;

int main()
{
    int a; // 这条语句指出程序需要足够的存储空间来存储一个整数
    a = 1; // 先声明后赋值
    cout << "a = " << a << endl;

    int carrots = 25; // 声明赋值一步完成
    carrots -= 1;     // 减1运算
    cout << "carrots = " << carrots << endl;
    return 0;
}
