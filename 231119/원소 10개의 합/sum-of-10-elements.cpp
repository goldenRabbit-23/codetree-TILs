#include <iostream>
using namespace std;

int main() {
    int n, total = 0;
    for (int i = 0; i < 10; i++) {
        cin >> n;
        total += n;
    }
    cout << total << '\n';

    return 0;
}