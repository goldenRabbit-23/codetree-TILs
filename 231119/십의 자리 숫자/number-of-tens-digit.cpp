#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> cnt(10, 0);
    int x;

    while (true) {
        cin >> x;
        if (x == 0)
            break;
        cnt[x / 10]++;
    }

    for (int i = 1; i <= 9; i++)
        cout << i << " - " << cnt[i] << '\n';

    return 0;
}