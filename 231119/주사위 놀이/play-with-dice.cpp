#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> cnt(7, 0);
    int x;

    for (int i = 0; i < 10; i++) {
        cin >> x;
        cnt[x]++;
    }

    for (int i = 1; i <= 6; i++)
        cout << i << " - " << cnt[i] << '\n';

    return 0;
}