#include <iostream>
using namespace std;

int main() {
	int n = 0, i = 0;

	cout << "Enter integer: " << endl;
	cin >> n;
	i = 1;

	while (i <= n) {
		cout << i++ << endl;
	}
	return 0;
}
