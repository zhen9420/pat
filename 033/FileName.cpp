#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int numdif(int year);
int a[4];
int main(void) {
	int n, y;
	
	cin >> n >> y;
	int x = 0, ans = n;
	while (1) {
		int k = numdif(ans);
		if (k == y) break;
		x++;
		ans++;
	}
	cout << x <<' ' <<setfill('0')<<setw(4) << ans;
}
int numdif(int year) {
	int ret = 0;
	a[0] = year / 1000;
	a[1] = year % 1000 / 100;
	a[2] = year % 100 / 10;
	a[3] = year % 10;
	int num[10] = { 0 };
	for (int i = 0; i < 4; i++) {
		num[a[i]]++;
	}
	for (int i = 0; i < 10; i++) {
		if (num[i] > 0) ret++;
	}
	return ret;
}
