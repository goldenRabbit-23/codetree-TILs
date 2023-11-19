#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 1, cnt = 0;

    while (true) {
        cout << n * i << ' ';
        if (n * i % 5 == 0)
            cnt++;
        if (cnt >= 2)
            break;
        i++;
    }

    return 0;
}