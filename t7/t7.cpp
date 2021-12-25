#include <iostream>
using namespace std;
int main() {
	int number;
	bool m = false;
	cout << "Enter the number: \n";
	cin >> number;
	for (int i = 0; i <= number; i += 5) {
		if (i == number) m = true;
	}
	if (m) cout << "divide into 5\n";
	else  cout << "no divide into 5\n";
	m = false;
	for (int i = 0; i <= number; i += 47) {
		if (i == number) m = true;
	}
	if (m) cout << "divide into 47\n";
	else  cout << "no divide into 47\n";
	m = false;
	for (int i = 0; i <= number; i += 89) {
		if (i == number) m = true;
	}
	if (m)cout << "divide into 89\n";
	else  cout << "no divide into 89\n";
	return 0;
}
