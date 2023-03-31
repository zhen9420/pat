#include<iostream>
using namespace std;
int a[1001] = { 0 };
int main(void) {
	int n1;
	cin >> n1;
	for (int i = 0; i < n1; i++) {
		int n2;
		cin >> n2;
		for (int j = 0; j < n2; j++) {
			int f;
			cin >> f;
			a[f]++;
		}
	}
	int max = 0;
	int maxid = 0;
	for (int i = 0; i < 1001; i++) {
		if (a[i] >= max) {
			max = a[i];
			maxid = i;
		}
	}
	cout << maxid << ' ' << max;
}