#include<iostream>
#include<vector>
using namespace std;
const int N = 1e5 + 10;
int n = 0;
vector<int> a;
int main(void) {
	cin >> n;
	for (int i = 0; i <n; i++) {
		int temp;
		cin >> temp;
		a[i] = temp * 10;
	}
	for (int i = 0; i < n; i++) {
		cout << a[i];
	}
}