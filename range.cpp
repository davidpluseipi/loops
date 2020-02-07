#include <iostream>
using namespace std;

int main() {
	int n;//= 3, b = 3;

	/* if (n &&  b>2) {
		cout << "n is nonzero and b is > 2" << endl;
	}

	while (n-- > 0) {
		cout << n << endl;
	}
	*/

	cout << "Enter an age and press ENTER: ";
	cin >> n;

	if (n>12 && n<20) {
		cout << "Subject is a teenager." << endl;
	}
	return 0;
}