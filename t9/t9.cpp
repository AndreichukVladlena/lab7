#include <cmath>
#include <iostream>
using namespace std;
int am_of_dig(int a) {
	int k = 0;
	for (; a >= 1; k++)a = a / pow(10, k);
	return k - 1;
}
int main()
{
	int a;
	cout << "Enter the number : \n";
	cin >> a;
	int am = am_of_dig(a);
	int result = 0;
	for (int i = a; ; i--) {
		int v = pow(3, am);
		if (i % v == 0) {
			result += i / v * pow(10, am);
			a = a - i;
			i = a;
			am--;
		}
		if (am == 0) {
			result += i;
			break;
		}
	}
	cout << "\nResult : \n" << result;
	return 0;
}
