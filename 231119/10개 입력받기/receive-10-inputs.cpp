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
        if (flag) {
            total += n;
            cnt++;
        }
    }

    cout << total << ' ' << fixed << setprecision(1) << total / double(cnt) << '\n';

    return 0;
}