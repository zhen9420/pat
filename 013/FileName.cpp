#include<iostream>
using namespace std;
typedef long long ll;
ll a[11];
ll factorial(int n) {
	a[0] = 1;
	a[1] = 1;
	if (a[n] != 0) {
		return a[n];
	}
	else {
		a[n] = n * factorial(n - 1);
		return a[n];
	}
}
int main(void) {
	int n;
	cin >> n;
	ll sum = 0;
	if (n == 0) cout << 1;
	else {
		for (int i = 1; i <= n; i++) {
			sum += factorial(i);
		}
		cout << sum;
	}
}