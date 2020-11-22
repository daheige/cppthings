#define NDEBUG // 禁用所有的assert调试
#include <cassert>
#include <iostream>

using namespace std;

int max(int a, int b);

int main()
{
    int a = 12, b = 15;
    assert(max(a, b) > 20);

    cout << "exec ok" << endl;

    return 0;
}

int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }

    return b;
}

/**
 * % ./assert.out
Assertion failed: (max(a, b) > 20), function main, file assert.cpp, line 11.
zsh: abort      ./assert.out
* 可以作为程序debug调试
*/
