#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    double gpa, total = 0.0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> gpa;
        total += gpa;
    }

    double avg = total / n;
    cout << fixed << setprecision(1) << avg << '\n';

    if (avg >= 4.0)
        cout << "Perfect" << '\n';
    else if (avg >= 3.0)
        cout << "Good" << '\n';
    else
        cout << "Poor" << '\n';

    return 0;
}