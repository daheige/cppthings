#include <iostream>
using namespace std;

int main() {
    int i;
    for (i = 0; i < 5; i++) {
        cout << "current i: " << i << endl;
    }

    cout << "for loop stop" << endl;

    // 递减for j--
    int limit = 5;
    int j;
    for (j = limit; j > 0; j--) {
        cout << "current j: " << j << endl;
    }

    // 改变步伐长为2
    for (int x = 0; x < 100; x += 2) {
        if (x >= 50) {
            break;
        }

        cout << "current x: " << x << endl;
    }

    return 0;
}

/*
current i: 0
current i: 1
current i: 2
current i: 3
current i: 4
for loop stop
*/