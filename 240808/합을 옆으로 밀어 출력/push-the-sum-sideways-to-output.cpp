#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    int n;
    int sum = 0;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        sum += temp;
    }
    string str = to_string(sum);
    string answer;
    for (int i = 1; i < str.size(); ++i) {
        answer.push_back(str[i]);
    }
    answer.push_back(str[0]);

    cout << answer;
    return 0;
}