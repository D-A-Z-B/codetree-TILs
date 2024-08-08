#include <iostream>
#include <string>
using namespace std;

int main() {
    string arr[2];
    string numArr[2];

    for (int i = 0; i < 2; ++i) {
        cin >> arr[i];
        for (int j = 0; j < arr[i].size(); ++j) {
            if (isdigit(arr[i][j])) {
                numArr[i] += arr[i][j]; 
            }
        }
    }

    int sum = 0;
    for (int i = 0; i < 2; ++i) {
        if (!numArr[i].empty()) {
            sum += stoi(numArr[i]);
        }
    }

    cout << sum;
    return 0;
}