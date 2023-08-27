# 字符串输入get读取
为什么要使用get()，而不是getline()呢？
首先，老式实现没有getline()。其次，get()使输入更仔细。
例如，假设用get()将一行读入数组中。
如何知道停止读取的原因是由于已经读取了整行，而不是由于数组已填满呢？
查看下一个输入字符，如果是换行符，说明已读取了整行；否则，说明该行中还有其他输入。
总之，getline()使用起来简单一些，但get()使得检查错误更简单些。可以用其中的任何一个来读取一行输入；
只是应该知道，它们的行为稍有不同。
getline使用
```c++
#include <iostream>
using namespace std;

int main() {
    const int ArSize = 20;  // 声明常量
    char name[ArSize];      // 名字保存在字符串字面量中
    char desSert[ArSize];
    cout << "enter your name:\n";

    // getline()函数每次读取一行。它通过换行符来确定行尾
    cin.getline(name, ArSize);  // 将输入的内容读取到一行中
    cout << "enter your favorite dessert:\n";
    cin.getline(desSert, ArSize);
    cout << "i have some delicious " << desSert;
    cout << " for you, " << name << " .\n";

    // cin.get()有另一种变体。使用不带任何参数的cin.get()调用
    // 可读取下一个字符（即使是换行符），因此可以用它来处理换行符，为
    // 读取下一行输入做好准备
    char name2[ArSize];
    cout << "enter other name:\n";
    cin.get(name2, ArSize);
    cout << "other name: " << name2 << endl;

    return 0;
}

/*
% g11 instr.cpp
% ./a.out
enter your name:
daheige
enter your favorite dessert:
golang c++
i have some delicious golang c++ for you, daheige .
enter other name:
heige
other name: heige
*/

```

get使用
```c++
#include <iostream>
using namespace std;

int main() {
    const int ArSize = 20;  // 声明常量
    char name[ArSize];      // 名字保存在字符串字面量中
    char desSert[ArSize];
    cout << "enter your name:\n";
    // cin.get()有另一种变体。使用不带任何参数的cin.get()调用
    // 可读取下一个字符（即使是换行符），因此可以用它来处理换行符，为
    // 读取下一行输入做好准备
    cin.get(name, ArSize).get();  // 将输入的内容读取到一行中
    cout << "enter your favorite dessert:\n";
    cin.get(desSert, ArSize).get();
    cout << "i have some delicious " << desSert;
    cout << " for you, " << name << " .\n";

    return 0;
}
/*
% g11 instr2.cpp
% ./a.out
enter your name:
daheige
enter your favorite dessert:
golang
i have some delicious golang for you, daheige .
*/
```
- 当getline()或get()读取空行时，将发生什么情况？最初的做法是，下一条输入语句将在前一条getline()或get()结束读取的位置开始读取；但当前的做法是，当get()（不是getline()）读取空行后将设置失效位（failbit）。这意味着接下来的输入将被阻断，但可以用下面的命令来恢复输入：
    ```c++
    cin.clear()
    ```
- 如果输入行包含的字符数比指定的多，则getline()和get()将把余下的字符留在输入队列中，而getline()还会设置失效位，并关闭后面的输入。

# c++中的string
c++ string定义
ISO/ANSI C++98标准通过添加string类扩展了C++库，因此现在可
以string类型的变量（使用C++ 的话说是对象）而不是字符数组来存储字符串。
您将看到，string类使用起来比数组简单，同时提供了将字符串作为一种数据类型的表示方法。
- 要使用string类，必须在程序中包含头文件string。
- string类位于名称空间std中，因此您必须提供一条using编译指令，或者使用std::string来引用它。
```c++
#include <iostream>
#include <string>

int main(){
    string s = "abc";  // 直接定义string
    cout << "s is : " << s << endl;
}
```
string对象和字符数组之间的主要区别是，可以将string对象声明为简单变量，而不是数组。
采用string定义，来简化instr2.cpp 代码，instr3.cpp 代码如下：
```c++
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    string desSert;

    cout << "enter your name:\n";
    cin >> name;  // 将输入的内容读取到name

    cout << "enter your favorite dessert:\n";
    cin >> desSert;

    cout << "i have some delicious " << desSert;
    cout << " for you, " << name << ".\n";

    return 0;
}

/*
% g11 instr3.cpp
% ./a.out
enter your name:
daheige
enter your favorite dessert:
golang
i have some delicious golang for you, daheige.
*/
```

# raw原始字符串显示
```c++
// raw原始字符串输出，使用R开头
// 使用R"+*(标识原始字符串的开头时，必须使用)+*"标识原始字符串的结尾
cout << R"(abc \nhello)" << endl;
```
