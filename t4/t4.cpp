#include <iostream>
#include <string>

using namespace std;

string sum(string a, string b);
string ras(string a, string b);
string is(int a);
int len(string str);
int str_to_int(string str);
void more(int& a, int& b);

int main()
{
	string a, b, c, r;
	cout << "Enter a, b:\n";
	cin >> a >> b;

	int sign = 1;
	int a_int, b_int;
	a_int = str_to_int(a);
	b_int = str_to_int(b);


	if (a_int < 0 && b_int > 0 && (abs(a_int) > abs(b_int)))
	{
		a_int *= -1;
		string an;
		more(a_int, b_int);
		an = a_int + '0';
		b = b_int + '0';
		r = sum(an, b);
		c = ras(an, b);
		cout << "Difference is:\n";
		cout << '-' << r << '\n';

		cout << "Sum is:\n";
		cout << '-' << c << '\n';
	}
	else if (a_int < 0 && b_int > 0 && (abs(a_int) < abs(b_int)))
	{
		a_int *= -1;
		string an;
		more(a_int, b_int);
		an = a_int + '0';
		b = b_int + '0';
		r = sum(an, b);
		c = ras(an, b);
		cout << "Difference is:\n";
		cout << '-' << r << '\n';

		cout << "Sum is:\n";
		cout << c << '\n';
	}
	else if (a_int > 0 && b_int < 0 && (abs(a_int) > abs(b_int)))
	{
		b_int *= -1;
		string bn;
		more(a_int, b_int);
		a = a_int + '0';
		bn = b_int + '0';
		r = sum(a, bn);
		c = ras(a, bn);
		cout << "Difference is:\n";
		cout << r << '\n';

		cout << "Sum is:\n";
		cout << c << '\n';
	}
	else if (a_int > 0 && b_int < 0 && (abs(a_int) < abs(b_int)))
	{
		b_int *= -1;
		string bn;
		more(a_int, b_int);
		a = a_int + '0';
		bn = b_int + '0';
		r = sum(a, bn);
		c = ras(a, bn);
		cout << "Difference is:\n";
		cout << r << '\n';

		cout << "Sum is:\n";
		cout << '-' << c << '\n';
	}
	else if (a_int > b_int && a_int > 0 && b_int > 0) {
		more(a_int, b_int);
		a = a_int + '0';
		b = b_int + '0';
		r = ras(a, b);
		c = sum(a, b);
		cout << "Difference is:\n";
		cout << r << '\n';

		cout << "Sum is:\n";
		cout << sum << '\n';
	}
	else if (a_int < 0 && b_int < 0 && a_int > b_int)
	{
		a_int *= -1;
		b_int *= -1;
		string an, bn;
		more(a_int, b_int);
		an = a_int + '0';
		bn = b_int + '0';
		r = ras(an, bn);
		c = sum(an, bn);
		cout << "Difference is:\n";
		cout << r << '\n';

		cout << "Sum is:\n";
		cout << '-' << c << '\n';
	}
	else if (a_int < 0 && b_int < 0 && a_int < b_int)
	{
		a_int *= -1;
		b_int *= -1;
		string an, bn;
		more(a_int, b_int);
		an = a_int + '0';
		bn = b_int + '0';
		r = ras(an, bn);
		c = sum(an, bn);
		cout << "Difference is:\n";
		cout << '-' << r << '\n';

		cout << "Sum is:\n";
		cout << '-' << c << '\n';
	}
	else if (abs(a_int) == abs(b_int))
	{
		if (a_int == b_int && b_int > 0)
		{
			cout << "Difference is:\n";
			cout << 0 << '\n';

			cout << "Sum is:\n";
			cout << 2 * a_int << '\n';
		}
		if (a_int == b_int && b_int < 0)
		{
			cout << "Difference is:\n";
			cout << 0 << '\n';

			cout << "Sum is:\n";
			cout << 2 * a_int << '\n';
		}
		if (a_int < 0 && b_int > 0)
		{
			cout << "Difference is:\n";
			cout << 2 * a_int << '\n';

			cout << "Sum is:\n";
			cout << 0 << '\n';
		}
		if (a_int > 0 && b_int < 0)
		{
			cout << "Difference is:\n";
			cout << 2 * a_int << '\n';

			cout << "Sum is:\n";
			cout << 0 << '\n';
		}
	}
	else
	{
		c = sum(a, b);
		r = ras(b, a);
		cout << "Difference is:\n";
		cout << '-' << r << '\n';

		cout << "Sum is:\n";
		cout << c << '\n';
	}
}

string sum(string a, string b) {
	string c = "", c1 = "";
	int counter = 0, tmp;
	int len_a, len_b;
	len_a = len(a);
	len_b = len(b);
	for (int i = len_a - 1, j = len_b - 1; i >= 0, j >= 0; --i, --j) {
		tmp = (a[i] - '0') + (b[j] - '0') + counter;
		if (tmp <= 15)
		{
			if (is(tmp) == "0")
				counter = 1;
			else counter = 0;

			c += is(tmp);
		}
		else
		{
			counter = tmp / 10;
			tmp %= 10;
			c += tmp + 48;
		}
	}

	int rasn;
	rasn = len_a - len_b;
	for (int i = rasn - 1; i >= 0; i--) {
		c += a[i] + counter;
	}

	for (int i = c.size() - 1; i >= 0; i--) {
		c1 += c[i];
	}

	return c1;
}

void more(int& a, int& b)
{
	int tmp = a;
	if (a < b)
	{
		a = b;
		b = tmp;
	}
}

string ras(string a, string b) {
	string c = "", c1 = "";
	int counter = 0, tmp;

	int len_a, len_b;
	len_a = len(a);
	len_b = len(b);
	for (int i = len_a - 1, j = len_b - 1; j >= 0; --i, --j) {
		tmp = (a[i] - '0') - (b[j] - '0');

		if (tmp < 0)
		{
			a[i] = a[i] + 15;
			a[i - 1] = a[i - 1] - 1;
			tmp = (a[i] - 48) - (b[j] - 48);
		}

		if (tmp <= 15)
		{
			c += is(tmp);
		}
	}

	int rasn;
	rasn = len_a - len_b;
	for (int i = rasn - 1; i >= 0; i--) {
		c += a[i];
	}
	int len_c;
	len_c = len(c);
	for (int i = len_c - 1; i >= 0; i--) {
		c1 += c[i];
	}

	return c1;
}

string is(int a)
{
	string b;
	if (a == 15)
		return (b = "0");
	else if (a == 14)
		return (b = "E");
	else if (a == 13)
		return (b = "D");
	else if (a == 12)
		return (b = "C");
	else if (a == 11)
		return (b = "B");
	else if (a == 10)
		return (b = "A");
	else return (b = a + 48);
}

int len(string str)
{
	int length;
	for (length = 0; str[length]; length++);

	return length;
}

int str_to_int(string str)
{
	int size, a = 0, minus = 1;
	size = len(str);
	for (int i = 0; i < size; ++i) {
		if (str[i] == '-')
			minus = -1;
		else
			a = 10 * a + str[i] - '0';
	}
	return (a * minus);
}