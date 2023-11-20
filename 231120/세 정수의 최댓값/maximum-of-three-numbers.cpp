#include <iostream>
using namespace std;
int main() {
    int arr[3];
	cin >> arr[0] >> arr[1] >> arr[2];
	int max = 0;
	for (int i = 0; i < 3; ++i) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	cout << max;
    return 0;
}