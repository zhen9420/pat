#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(void) {
	string s;
	cin >> s;
	int g = 0, p = 0, l = 0, t = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'G'||s[i]=='g') g++;
		if (s[i] == 'P'||s[i]=='p') p++;
		if (s[i] == 'L'||s[i]=='l') l++;
		if (s[i] == 'T'||s[i]=='t') t++;

	}
	int n = max(max(g, p), max(l, t));
	for (int i = 0; i < n; i++) {
		if (g > 0) {
			cout << 'G';
			g--;
		}
		if (p> 0) {
			cout << 'P';
			p--;
		}
		if (l > 0) {
			cout << 'L';
			l--;
		}
		if (t > 0) {
			cout << 'T';
			t--;
		}
	}
}