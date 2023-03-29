#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main(void) {
	string s;
	cin >> s;
	int num2 = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '2') num2++;
	}
	double ans = num2 * 1.0 / s.length();
	if (s[0] == '-') {
		ans = num2 * 1.0 / (s.length() - 1)*(1.5);
	}
	if (s[s.length() - 1] % 2 == 0) {
		ans *= 2;
	}
	ans *= 100;
	cout << fixed << setprecision(2) << ans << '%';
}