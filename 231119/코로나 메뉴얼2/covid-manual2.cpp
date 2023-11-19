#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr(4, 0);
    char has_symptom;
    int body_temp;

    for (int i = 0; i < 3; i++) {
        cin >> has_symptom >> body_temp;
        if (has_symptom == 'Y' && body_temp >= 37)
            arr[0]++;
        else if (has_symptom == 'N' && body_temp >= 37)
            arr[1]++;
        else if (has_symptom == 'Y' && body_temp <= 36)
            arr[2]++;
        else
            arr[3]++;
    }

    for (int i = 0; i < 4; i++)
        cout << arr[i] << ' ';

    if (arr[0] >= 2)
        cout << 'E';

    return 0;
}