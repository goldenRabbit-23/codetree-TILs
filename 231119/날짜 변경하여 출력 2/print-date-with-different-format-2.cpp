#include <iostream>
using namespace std;

int main() {
    int m, d, y;
    cin >> m;
    cin.ignore();
    cin >> d;
    cin.ignore();
    cin >> y;
    cout << y << '.' << m << '.' << d << '\n';

    return 0;
}