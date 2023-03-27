#include<iostream>
#include<string>
using namespace std;
int main(void) {
	string s[10] = { "ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu" };
	string s2;
	cin >> s2;
	if (s2[0] != '-') {
		for (int i = 0; i < s2.length(); i++) {
			for (int j = 0; j < 10; j++) {
				if (s2[i] - '0' == j) {
					cout << s[j];
				}
			}
			if (i != s2.length() - 1) cout << ' ';
		}
	}
	else {
		cout << "fu" << ' ';
		for (int i = 1; i < s2.length(); i++) {
			for (int j = 0; j < 10; j++) {
				if (s2[i] - '0' == j) {
					cout << s[j];
				}
			}
			if (i != s2.length() - 1) cout << ' ';
		}
	}
}