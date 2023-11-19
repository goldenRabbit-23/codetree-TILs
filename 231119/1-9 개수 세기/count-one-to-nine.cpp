#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> cnt(10, 0);
    int x;

    for (int i = 0; i < n; i++) {
        cin >> x;
        cnt[x]++;
    }

    for (int i = 1; i <= 9; i++)
        cout << cnt[i] << '\n';

    return 0;
}