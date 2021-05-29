#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    // 输入流定义
    ifstream in_stream;

    // 输出流定义
    ofstream out_stream;

    string in_name = "test.txt";
    string out_name = "out.txt";
    // 打开文件
    in_stream.open(in_name);
    if (in_stream.fail())
    {
        cout << "open file " << in_name << " fail";
        exit(1);
    }

    // 以追加的方式添加内容到文件中
    out_stream.open("out.txt", ios::app);
    if (out_stream.fail())
    {
        cout << "write file fail";
        exit(1);
    }

    string a, b, c, d, e;
    in_stream >> a >> b >> c >> d >> e;

    out_stream << "read content \n"
               << a << b << c << d << e << endl;

    in_stream.close();
    out_stream.close();

    return 0;
}
