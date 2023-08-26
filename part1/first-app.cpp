#include <iostream>  // 标准输入/输出
using namespace std; // cout放在std这个命名空间下面

// 通常使用换行符\n，在其他情况下则使用控制符endl。
// 一个差别是，endl确保程序继续运行前刷新输出（将其立即显示在屏幕上）；
// 而使用\n不能提供这样的保证，这意味着在有些系统中，有时可能在您输入信息后才会出现提示
int main()
{
    // endl换行控制符
    cout << "come up and c++ me some time." << endl;

    // 字符串中的\n换行符
    cout << "you won't regret it!\n";

    // 变量声明
    int a = 1;
    a += 1;
    cout << "a = " << a << endl;

    return 0;
}
