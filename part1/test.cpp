#include <iostream>
using namespace std;

int main()
{
    // endl输出流函数，会重刷一次输出流并立即换行
    cout << "hello,world" << endl;
    // 字符串中的\n换行符，直接只用\n，而不需要使用endl
    cout << "testing 1,2,3\n";
	char letter;
	cout << "enter a letter to end the program:\n";

	// 接受终端输入的字符
	cin >> letter;
	cout << letter;
	return 0;
}

