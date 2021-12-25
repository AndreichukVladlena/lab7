#include <iostream>
#include <string>
using namespace std;
string change(string s, int sh) {
	for (sh; sh < size(s); sh++) {
		if (s[sh] == '0')s[sh] = '1';
		else if (s[sh] == '1')s[sh] = '0';
	}
	return s;
}
int main()
{
	string addcode, rescode;
	cout << "Enter additional code : \n";
	getline(cin, addcode);
	if (addcode[0] == '0')rescode = addcode;
	if (addcode[0] != '0') {
		for (int i = size(addcode);; i--) {
			if (addcode[i] == '1')		{
				rescode = change(addcode, i);
				break;
			}
		}
	}
	cout << "Result : \n" << rescode;
	return 0;
}