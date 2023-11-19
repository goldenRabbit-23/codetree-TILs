#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int std_cnt, score, total, pass_cnt = 0;
    cin >> std_cnt;

    for (int i = 0; i < std_cnt; i++) {
        total = 0;
        for (int j = 0; j < 4; j++) {
            cin >> score;
            total += score;
        }
        if (total / 4.0 >= 60.0) {
            cout << "pass\n";
            pass_cnt++;
        } else {
            cout << "fail\n";
        }
    }

    cout << pass_cnt << '\n';

    return 0;
}