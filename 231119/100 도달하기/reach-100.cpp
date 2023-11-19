#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a = 1, b = n, tmp;
    cout << a << ' ' << b << ' ';
    while (true) {
        tmp = a + b;
        cout << tmp << ' ';
        if (tmp > 100)
            break;
        a = b;
        b = tmp;
    }

    return 0;
}