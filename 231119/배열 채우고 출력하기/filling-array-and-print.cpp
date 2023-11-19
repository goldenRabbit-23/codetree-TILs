#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<char> arr(10);
    for (char& c : arr)
        cin >> c;
    for (int i = 9; i >= 0; i--)
        cout << arr[i];

    return 0;
}