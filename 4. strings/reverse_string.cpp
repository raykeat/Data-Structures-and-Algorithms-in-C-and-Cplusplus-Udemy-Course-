#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void swap(char* a, char* b) {
    char c;
    c = *a;
    *a = *b;
    *b = c;
}

int main() {
    string s = "Hello world";
    int len = s.length();
    for (int i = 0; i <= floor(len / 2); i++) {
        swap(&s[i], &s[len - i - 1]);
    }
    cout << s << endl;

    return 0;
}
