#include <iostream>
using namespace std;

int main() {
    int y, m, d;
    cin >> y;
    cin.ignore();
    cin >> m;
    cin.ignore();
    cin >> d;
    cout << m << '-' << d << '-' << y << '\n';

    return 0;
}