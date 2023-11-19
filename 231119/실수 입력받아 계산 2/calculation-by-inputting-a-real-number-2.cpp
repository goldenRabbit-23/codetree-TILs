#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    double n;
    cin >> n;
    cout << fixed << setprecision(2) << n + 1.5 << '\n';

    return 0;
}