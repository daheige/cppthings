#include <iostream>
using namespace std;

// 接收从键盘输入的字符串
// 用cin来读取键盘输入
// 输入时，cin使用 >> 运算符从输入流中抽取字符
int main()
{
    int carrots;
    cout << "how many carrots do you have?" << endl;
    cin >> carrots; // cin >> 表示从键盘接收输入的字符

    // cout << xxx 表示把xxx流向到cout输出流中
    cout << "here arw two more.";
    carrots += 2;
    cout << "now you have " << carrots << " carrots" << endl;

    return 0;
}

/*
% g11 getinfo.cpp -o a.out
% ./a.out
how many carrots do you have?
123
here arw two more.now you have 125 carrots
*/