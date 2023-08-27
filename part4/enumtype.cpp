#include <iostream>
using namespace std;

// 枚举定义
// 在打印枚举的时候，底层是数字0,1,开始
// 默认情况下为0。后面没有被初始化的枚举量的值将比其前面的枚举量大1
enum spectrum { red, orange, yellow, green, blue };

// 给枚举定义值
// 指定的值必须是整数
enum bits { one = 1, two = 2, four = 4, eight = 8 };

int main() {
    spectrum s = red;
    cout << "spectrum is: " << s << endl;
    bits b = one;
    cout << "bit is: " << b << endl;
    return 0;
}