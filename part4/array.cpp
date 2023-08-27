#include <array>  // 数组使用的header头，仅仅是c++风格的数组使用
#include <iostream>
using namespace std;

// 数组的声明和使用
int main() {
    // 数组声明格式：typename arrayname[size]
    int arr[3];  // 长度为3的数组
    arr[0] = 1;
    arr[1] = 2;

    cout << "arr[0] = " << arr[0] << endl;
    cout << "arr[1] = " << arr[1] << endl;
    cout << "arr[2] = " << arr[2] << endl;  // arr[2]默认为0
    cout << "arr[0] size = " << sizeof arr[0] << " bytes"
         << endl;  // 元素的长度 4字节

    // 如果将sizeof运算符用于数组名，得到的将是整个数组中的字节数
    cout << "arr size = " << sizeof arr << " bytes" << endl;

    // 声明并初始化
    int cards[4] = {1, 2, 3, 4};  // 数组长度为4,每个元素都是int类型
    cout << "cards[0] = " << cards[0] << endl;

    // 声明指定长度，并设置初始化值
    // 如果只对数组的一部分进行初始化，则编译器将把其他元素设置为0。
    // 因此，将数组中所有的元素都初始化为0非常简单—只要显式地将第
    // 一个元素初始化为0， 然后让编译器将其他元素都初始化为0即可：
    int c[3] = {0};
    cout << "current c[0] = " << c[0] << endl;

    // 省略=声明
    // int pis[4] {1, 2, 3, 4};
    int pis[4] = {1, 2, 3, 4};
    cout << "current pis[1] = " << pis[1] << endl;

    // c++风格的数组使用，需要引入array头
    array<int, 5> ai = {1, 2, 3, 4, 5};
    cout << "ai[0] = " << ai[0] << " ai[2] = " << ai[2] << endl;

    return 0;
}
