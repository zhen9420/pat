#include<iostream>
#include<string>
using namespace std;

int main(void) {
	int n;
	char x;
	cin >> n>>x;
	string s;
	int m=getchar();
	getline(cin, s);
	if (n <= s.length()) cout << s.substr(s.length() - n, n);
	else {
		for (int i = 0; i < n - s.length(); i++) {
			cout << x;
		}
		cout << s;
	}
}