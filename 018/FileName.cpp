#include<iostream>
#include<string>
using namespace std;
int main(void) {
	string s;
	cin >> s;
	int h = (s[0] - '0') * 10 + (s[1] - '0');
	int m = (s[3] - '0') * 10 + (s[4] - '0');
	cout << h << ' ' << m;
}