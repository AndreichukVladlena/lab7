#include <iostream>
using namespace std;

int intrst(long long int a) {
	int answer=0;
	for (int i = 1; i <= a; i++) {
		int sum1 = 0, sum2 = 0;
		int s1 = i;
		while (s1 >= 1) {
			sum1 += s1 % 10;
			s1 /= 10;
		}
		int s2 = i + 1;
		while (s2 >= 1) {
			sum2 += s2 % 10;
			s2 /= 10;
		}
		if (sum2 < sum1) answer++;
	}
	return answer;
}
int main() {
	long long int t;
	cout << "Enter t : \n";
	cin >> t;
	cout << "\n\n";
	int a;
	while (t > 0) {
		cin >> a;
		cout << "Answer : \n" << intrst(a) << "\n\n";
		t--;
	}
	return 0;
}