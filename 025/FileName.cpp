#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int b[2] = { 0 };
string s;
string s1, s2;
bool a[2] = { 1,1 };
void trans(string s,int t ,int l);
int main(void) {
	getline(cin, s);
	int l1 = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ' ') {
			l1 = i;
			break;
		}
	}
	s1 = s.substr(0, l1);
	s2 = s.substr(l1 + 1, s.length() - l1 - 1);
	for (int i = 0; i < s1.length(); i++) {
		if (s1[i] < '0' || s1[i]>'9') {
			a[0] = 0;
			break;
		}
	}
	for (int i = 0; i < s2.length(); i++) {
		if (s2[i] < '0' || s2[i]>'9') {
			a[1] = 0;
			break;
		}
	}
	if (a[0]) trans(s1,0,s1.length());
	if (a[1]) trans(s2,1, s2.length());
	if (b[0] < 1 || b[0]>1000) { a[0] = false; }
	if (b[1] < 1 || b[1]>1000) { a[1] = 0; }
	if (a[0] == 1 && a[1] == 1)cout << b[0] << ' ' << '+' << ' ' << b[1] << ' ' << '=' <<' '<< b[0] + b[1];
	if (a[0] == 1 && a[1] == 0)cout << b[0] << ' ' << '+' << ' ' << '?' << ' ' << '=' << ' ' <<'?';
	if (a[0] == 0 && a[1] == 1)cout << '?' << ' ' << '+' << ' ' << b[1] << ' ' << '=' << ' ' << '?';
	if (a[0] == 0 && a[1] == 0)cout << '?' << ' ' << '+' << ' ' << '?' << ' ' << '=' << ' ' << '?';
}
void trans(string s, int t,int length) {
	int num = 0;
	for (int i = length - 1; i >= 0; i--) {
		num += (s[i] - '0') * pow(10, length - i - 1);

	}
	b[t] = num;
}