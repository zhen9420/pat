#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int m);
int main(void) {
	int n;
	cin >> n;
	int x[10];
	for (int i = 0; i < n; i++) {
		std::cin >> x[i];
	}
	for (int i = 0; i < n; i++) {
		if (isprime(x[i])==1) cout << "Yes";
		else cout << "No";
		if (i < n - 1) cout << endl;
	}
}
bool isprime(int m) {
	int t = sqrt(m);
	bool ret = true;
	if (m >= 2) {
		for (int i = 2; i <= t; i++) {
			if (m % i == 0) {
				ret = false;
			}
		}
	}
	else ret = false;
	return ret;
}