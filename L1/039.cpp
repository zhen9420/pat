#include<iostream>
#include<string>
#include<cmath>
#include<iomanip>
using namespace std;
const int x = 1010;
int n; string s; string ans[101];
int main(void) {
	
	cin >> n;
	int m=getchar();
	getline(cin, s);
	int x = ceil(s.size() * 1.0 / n);
	for (int i = 0; i < n; i++) {
		for (int j = s.size()-1; j >=0; j--) {
			if (j % n == i) ans[i] += s[j];
		}
	}
	for (int i = 0; i < n; i++) {
		cout << setfill(' ') << setw(x) << ans[i];
		if(i<n-1) cout << endl;
	}

}