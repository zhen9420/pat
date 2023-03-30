#include<iostream>
#include<iomanip>
using namespace std;
int main(void) {
	int h;
	cin >> h;
	double ans = (h - 100) * 0.9 * 2;
	cout << fixed << setprecision(1)<< ans;
}