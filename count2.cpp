#include <iostream>
using namespace std;

int main() {
	int n = 0, i = 0;
	bool big = 0;

	cout << " Count from: ";
	cin >> i;
	cout << " to: ";
	cin >> n;

	while (i <= n) {
		cout << i++ << " ";
		big = (i > 10);
		if (big) { // stop counting at 10
			break;
		}
	}
	cout << endl;
	return 0;
}