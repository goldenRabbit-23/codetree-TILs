#include <iostream>
using namespace std;

int main() {
    int h, m;
    cin >> h;
    cin.ignore();
    cin >> m;
    cout << h + 1 << ':' << m << '\n';

    return 0;
}