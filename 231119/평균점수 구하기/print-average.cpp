#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    double score, total = 0.0;
    for (int i = 0; i < 8; i++) {
        cin >> score;
        total += score;
    }
    cout << fixed << setprecision(1) << total / 8 << '\n';

    return 0;
}