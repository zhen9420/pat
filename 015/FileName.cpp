#include<iostream>
#include<cmath>
using namespace std;
int main(void) {
	int x;
	char m;
	cin >> x >> m;
	int n = round(x / 2.0);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < x; j++) {
			cout << m;
		}
		if (i != n - 1) cout << endl;
	}
}