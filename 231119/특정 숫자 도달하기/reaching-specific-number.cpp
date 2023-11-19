#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, total = 0, cnt;
    for (cnt = 0; cnt < 10; cnt++) {
        cin >> n;
        if (n >= 250)
            break;
        total += n;
    }
    cout << total << ' ' << fixed << setprecision(1) << total / double(cnt) << '\n';

    return 0;
}