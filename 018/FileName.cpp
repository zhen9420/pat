
#include<iostream>
#include<string>
using namespace std;
int main(void) {
	string s;
	cin >> s;
	int h = (s[0] - '0') * 10 + (s[1]-'0');
	int m = (s[3] - '0') * 10 + (s[4]-'0');
	int num=h-12;
	if (m > 0) num += 1;
	if (h >= 0 && h <= 11) cout << "Only " << s << ".  Too early to Dang.";
	else if (h == 12 && m == 0) cout << "Only 12:00.  Too early to Dang.";
	else {
		for (int i = 0; i < num; i++) {
			cout << "Dang";
		}
	}
}