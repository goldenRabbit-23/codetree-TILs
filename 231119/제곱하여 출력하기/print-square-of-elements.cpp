#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int& e : arr)
        cin >> e;

    for (int& e : arr)
        cout << e * e << ' ';

    return 0;
}