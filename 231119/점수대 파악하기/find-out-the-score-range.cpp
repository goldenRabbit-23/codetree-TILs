#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> cnt(11, 0);
    int x;

    while (true) {
        cin >> x;
        if (x == 0)
            break;
        cnt[x / 10]++;
    }

    for (int i = 10; i >= 1; i--)
        cout << i * 10 << " - " << cnt[i] << '\n';

    return 0;
}