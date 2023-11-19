#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    bool flag = true;
    int n, total = 0, cnt = 0;

    for (int i = 0; i < 10; i++) {
        cin >> n;
        if (n == 0)
            flag = false;
        if (flag && n % 2 == 0) {
            total += n;
            cnt++;
        }
    }

    cout << cnt << ' ' << total << '\n';

    return 0;
}