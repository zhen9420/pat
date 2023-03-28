#include<iostream>
#include<string>
#include<cmath>
using namespace std;
typedef long l;
l a[101],b[101];
l A = 0, B = 0;
int t = 0;
string s[101];
void convert1(int ordinal, int position, bool sgn) ;
void convert2(int ordinal, int position,int length) ;
void add(l A, l B,l a,l b);
int main() {
	int x;
	cin >> x;
	;
	for (int i = 0; i < x; i++) {
		cin >> s[i];

	}
	for (int i = 0; i < x; i++) {
		if (s[i][0] != '-') {
			for (int j = 0; j < s[i].length(); j++) {
				if (s[i][j] == '/') {
					convert1( i, j, 0);
					convert2( i, j,s[i].length());
					break;
				}
			}
		}
		else {
			for (int j = 1; j < s[i].length(); j++) {
				if (s[i][j] == '/') {
					convert1(i, j, 1);
					convert2(i, j,s[i].length());
					break;
				}
			}
		}
	}
	for (int i = 0; i < x; i++) {

		add(A, B, a[i], b[i]);
	}
	cout << A << '/' << B;
}
void convert1(int ordinal, int position, bool sgn) {
	if (sgn) {
		for (int j = position - 1; j >= 1; j--) {
			a[t] -= (s[ordinal][j] - '0') * pow(10, position - j - 1);
		}
	}
	else {
		for (int j = position - 1; j >= 0; j--) {
			a[t] += (s[ordinal][j] - '0') * pow(10, position - j - 1);
		}
	}
}
void convert2(int ordinal, int position,int length) {
	for (int j = length -1; j >position; j--) {
		b[t] += (s[ordinal][j] - '0') * pow(10, length - j - 1);
	}
	t++;
}
void add(l A,l B,l a,l b) {
	if (A == 0 && B == 0) {
		A += a;
		B += b;
	}
	else {
		if (B == b) {
			A += a;
		}
		if (B % b == 0) {
			int c = B % b;
			A += c * a;
		}
		else if (b % B == 0) {
			int c = b % B;
			A = A * c + a;
			B = b;
		}
		else {
			B = B * b;
			A = A * b + a * B;
		}
	}
}
