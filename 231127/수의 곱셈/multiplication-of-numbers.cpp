#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);
    int answer = max({ a[0] * a[1], a[0] * a[2], a[1] * a[2], a[0] * a[1] * a[2] });
    cout << answer;
}