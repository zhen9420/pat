#include<iostream>
#include<cmath>
using namespace std;
bool prime[2147483647] ;
void ai(){
	memset(prime, true, sizeof(prime));
	prime[1] = false;
	long n = sqrt(2147483647);
	for (long i = 2; i <= n; i++) {
		if (prime[i]) {
			for (long j = 2; j <= 2147483647 / i; j++) {
				prime[i * j] = false;
			}
		}
	}
}
int main(void) {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (prime[x]) cout << "Yes";
		else cout << "No";
		if (i < n - 1) cout << endl;

	}
}