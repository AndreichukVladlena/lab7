#include <iostream>
#include <string>
using namespace std;
string res_code(string s) {
	if (s[0] == '1') {
		for (int i = 1; i < size(s); i++) {
			if (s[i] == '1')s[i] = '0';
			else if (s[i] == '0')s[i] = '1';
		}
	}
	return s;
}
string add_code(string s) {
	if (s[0] == '1') {
		for (int i = size(s) - 1; i >= 1; i--) {
			if (s[i] == '0')s[i] = '1';
			break;
		}
	}
	return s;
}
string diff(string s1, string s2) {
	int diff = size(s2) - size(s1);
	s1.insert(0, diff, '0');
	return s1;
}
int main() {
	string s1, s2, sum;
	cout << "Enter the 1st term : \n";
	getline(cin, s1);
	cout << "Enter the 2nd term : \n";
	getline(cin, s2);
	s1 = res_code(s1);
	s2 = res_code(s2);
	cout << "\nReserve codes : \n" << s1 << "\n" << s2;
	s1 = add_code(s1);
	s2 = add_code(s2);
	cout << "\n\nAdditional codes : \n" << s1 << "\n" << s2 << "\n";
	if (size(s1) < size(s2))s1 = diff(s1, s2);
	if (size(s1) > size(s2))s2 = diff(s2, s1);
	char* result = new char[size(s1) + 2];
	for (int i = 0; i <= size(s1); i++) {
		result[i] = '0';
	}
	for (int i = size(s1); i >= 1; i--) {
		result[i] += char((int)s1[i - 1] + (int)s2[i - 1] - 2 * (int)'0');
		if (result[i] == '3') {
			result[i] = '1';
			result[i - 1] += '1' - '0';
		}
		if (result[i] == '2') {
			result[i] = '0';
			result[i - 1] += '1' - '0';
		}
	}
	int zero = 0, k = 0;
	while (result[k] == '0') {
		zero++;
		k++;
	}
	cout << "\nResult : \n";
	for (int i = zero; i <= size(s1); i++) {
		cout << result[i];
	}
	return 0;
}