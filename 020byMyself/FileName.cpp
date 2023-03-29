#include<iostream>
#include<string>
using namespace std;
string s[100][1000];
bool check[10000] = { 0 };
bool isreprint(int position, int l);
string m[10000];
int ans[10000];
int main(void) {
	int n;
	cin >> n;
	int a[100] = {0};
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		for (int j = 0; j < a[i]; j++) {
			cin >> s[i][j];
		}      
	}
	int x;
	cin >> x;
	for (int t = 0; t < x; t++) {
		cin >> m[t];
	}
	int check2 = 0;
	for (int t = 0; t < x; t++) {
		int check1 = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < a[i]; j++) {
				if (s[i][j] == m[t]) {
					check1 = 1;
					break;
				}
			}
			if (check1 == 1) break;
		}
		if (check1 == 0 && isreprint(t, x) == false) {
			ans[check2] = t;
			check2++;
			check[t] = 1;
		}
	}
	for (int i = 0; i < check2 ; i++) {
		cout << m[ans[i]];
		if (i != check2-1) cout << ' ';
	}
	if (check2 == 0) cout << "No one is handsome";
}
bool isreprint(int positon, int l) {
	bool ret = false;
	for (int i = 0; i < l; i++) {
		if (i != positon && m[positon] == m[i] && check[i] == 1) {
			ret = true;
			break;
		}
	}
	return ret;
}