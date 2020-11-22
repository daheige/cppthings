/**
 * file: liucheng.cpp
 * author: daheige
 * email: zhuwei313@hotmail.com
 * desc: 流程语句练习
 * last update: 2020-11-21 10:20
 */
#include <iostream>
using namespace std;

int main()
{
    // if...else
    int score = 123;
    if (score > 2 && score <= 125)
    {
        cout << "hello" << endl;
    }
    else
    {
        cout << "score: " << score << endl;
    }

    // while
    int x = 0;
    while (x < 100)
    {
        cout << "current index: " << x << endl;
        x++;
    }

    int m = 100;
    while (m--)
    {
        cout << "current m = " << m << endl;
    }

    // do...while
    int n = 10;
    do
    {
        cout << "current n = " << n << endl;
        n--;
    } while (n > 0);

    // 常量定义
    const double NORMAL = 98.6;
    cout << "normal const = " << NORMAL << endl;

    // 枚举定义
    // 显示指定值
    //  c++ class修饰enum
    // g++ -o liucheng.out -std=c++11 liucheng.cpp
    enum class Color
    {
        red = 1,
        black = 2,
        yellow = 3,
        blue = 4,
    };
    enum class Direction
    {
        NORTH,
        SOUTH,
        EAST,
        WEAT,
    };

    Color red = Color::red;
    Direction d = Direction::WEAT;

    for (int i = 0; i < 10; i++)
    {
        if (i % 2)
        {
            continue;
        }

        cout << "current i = " << i << endl;
    }

    for (int n = 100; n > 0; n--)
    {
        if (n == 20)
        {
            break;
        }

        cout << "current n = " << n << endl;
    }

    return 0;
}