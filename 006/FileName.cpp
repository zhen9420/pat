#include<iostream>
#include<cmath>
using namespace std;
int a[50];
int main(void) {
	int x;
	cin >> x;
	int length = 0;
	int n = sqrt(x);
	int first = 1;
	for (int i = 2; i <= n+2; i++) {
		int l = 0;
		int b = 1;
		int N = x;
		for (int j = i; j <= n+2; j++) {
			if (N % j == 0) {
				b = i;
				l++;
				N /= j;
				if (l > length) {
					length = l;
					first = b;
				}
			}
			else break;
		}
	}
	if (first == 1) {
		cout << 1 << endl << x;
	}
	else {
		cout << length << endl;
		for (int i = first; i < first + length; i++) {
			cout << i;
			if (i != first + length - 1) {
				cout << '*';
			}
		}
	}
}