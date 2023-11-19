#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr(10);
    int cnt = 0;

    for (int& e : arr) {
        cin >> e;
        if (e == 0)
            break;
        cnt++;
    }

    for (int i = cnt - 1; i >= 0; i--)
        cout << arr[i] << ' ';

    return 0;
}