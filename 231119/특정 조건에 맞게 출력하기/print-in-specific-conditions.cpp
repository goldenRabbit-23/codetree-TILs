#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    while (true) {
        cin >> n;
        if (n == 0)
            break;
        if (n % 2 == 1)
            cout << n + 3 << ' ';
        else
            cout << n / 2 << ' ';
    }

    return 0;
}