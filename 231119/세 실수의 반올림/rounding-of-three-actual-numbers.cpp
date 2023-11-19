#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    cout << fixed << setprecision(3)
         << a << '\n'
         << b << '\n'
         << c << '\n';

    return 0;
}