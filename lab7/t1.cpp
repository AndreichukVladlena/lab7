#include <iostream>
using namespace std;
int am_of_dig(int a) {
	int k = 1;
	for (; a >= 1; k++)a = a / pow(10, k);
	return k;
}
int to10(int a) {
	int k = am_of_dig(a), g = 0, buff = 0;
	while (g <= k) {
		int r = a % 10;
		buff += pow(6, g) * r;
		a /= 10;
		g++;
	}
	return buff;
}
string to15(int a)
{
	string tmp = "";
	do
	{
		int r = a % 15;
		if (r > 9) r += (int)'A' - 10;
		else r += (int)'0';
		tmp = (char)r + tmp;
		a /= 15;
	} while (a);
	return tmp;
}
int main()
{
	int a;
	cout << "Enter the number : \n";
	cin >> a;
	cout << "Int : \n";
	a = to10(a);
	cout << a;
	cout << "\nAnswer : \n";
	string answer = to15(a);
	cout << answer;
	return 0;
}
