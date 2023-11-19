#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a, b, tmp;
    cin >> a >> b;
    cout << a << ' ' << b << ' ';

    for (int i = 0; i < 8; i++) {
        tmp = a * 2 + b;
        cout << tmp << ' ';
        a = b;
        b = tmp;
    }

    return 0;
}