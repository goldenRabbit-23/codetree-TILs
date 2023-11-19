#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    double n;
    cin >> n;
    cout << fixed << setprecision(1) << n * 30.48 << '\n';

    return 0;
}