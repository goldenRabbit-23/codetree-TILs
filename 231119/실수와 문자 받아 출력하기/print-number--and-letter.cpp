#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    char c;
    double a, b;
    cin >> c >> a >> b;
    cout << c << '\n'
         << fixed << setprecision(2)
         << a << '\n'
         << b << '\n';

    return 0;
}