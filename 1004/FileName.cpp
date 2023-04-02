#include<iostream>
#include<string>
#include<cmath>
using namespace std;
string s;
int x = 0, y = 0;
int last = -1;
void chexiao(int);
int main(void) {
	int n;
	cin >> n >> s;

	for (int i = 0; i < s.length(); i++) {
		char c = s[i];
		if (c == 'A') {
			x--;
			last = i;
		}
		else if (c == 'W') {
			y++;
			last = i;
		}
		else if (c == 'D') {
			x++;
			last = i;
		}
		else if (c == 'S') {
			y--;
			last = i;
		}
		else if (c == 'Z') chexiao(last);
	}
	cout << x << ' ' << y;
}
void chexiao(int bs) {
	if (last == -1) {
		return;
	}
	else {
		if (s[last] == 'A') {
			x++;
			last--;
		}
		else if (s[last] == 'D') {
			x--;
			last--;
		}
		else if (s[last] == 'W') {
			y--;
			last--;
		}
		else if (s[last] == 'S') {
			y++;
			last--;
		}
	}
}
