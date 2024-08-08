#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int answer = 99;

    for (int i = 1; i < n; ++i) {
        int temp = abs(arr[i] - arr[i - 1]);
        if (temp < answer) {
            answer = temp;
        }
    }
    cout << answer;
    return 0;
}