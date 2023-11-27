#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    bool isAllEven = true;
    int answer = 1;
    for (int i = 0; i < 3; ++i) {
        if (a[i] % 2 != 0) {
            isAllEven = false;
            break;
        }
    }

    if (isAllEven) {
        for (int i = 0; i < 3; ++i) {
            answer *= a[i];
        }
    } else {
        for (int i = 0; i < 3; ++i) {
            if (a[i] % 2 != 0) {
                answer *= a[i];
            }
        }
    }
    cout << answer;
}