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

    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] % 2 == 0)
            cout << arr[i] << ' ';
    }

    return 0;
}