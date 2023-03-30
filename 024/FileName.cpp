#include<iostream>
using namespace std;
int main(void) {
	int n;
	cin >> n;
	int ans= (n + 2) % 7;
	if (ans == 0) cout << 7;
	else cout << ans;
}