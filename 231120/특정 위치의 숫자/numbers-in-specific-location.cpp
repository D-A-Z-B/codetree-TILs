#include <iostream>
using namespace std;
int main() {
    int n;
    int arr[10];
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        cin >> n;
        arr[i] = n;
    }
    for (int i = 0; i < 10; ++i) {
        if(i == 2 || i == 4 || i ==9) {
            sum += arr[i];
        }
    }
    cout << sum;
    return 0;
}