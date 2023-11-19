#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    vector<int> mod_cnt(b, 0);

    while (a > 1) {
        mod_cnt[a % b]++;
        a /= b;
    }

    int ans = 0;

    for (int i = 0; i < b; i++)
        ans += mod_cnt[i] * mod_cnt[i];

    cout << ans << '\n';

    return 0;
}