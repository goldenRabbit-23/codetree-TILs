#include <iostream>
using namespace std;

int main() {
    int _, x, y;
    cin >> _;
    cin.ignore();
    cin >> x;
    cin.ignore();
    cin >> y;
    cout << "010-" << y << '-' << x << '\n';

    return 0;
}