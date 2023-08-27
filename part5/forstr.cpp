#include <iostream>
#include <string>
using namespace std;

// 通过for实现字符串反转
int main() {
    cout << "enter a word: ";
    string word;
    cin >> word;
    char temp;
    int i, j;
    for (j = 0, i = word.size() - 1; j < i; --i, ++j) {
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }
    cout << "rev word: " << word << endl;

    return 0;
}

/*
% ./a.out
enter a word: hello
rev word: olleh
*/