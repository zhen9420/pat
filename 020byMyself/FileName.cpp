#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int a[100000] = { 0 };
int main(void) {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int n1;
		cin >> n1;
		for (int j = 0; j < n1; j++) {
			int id = 0;
			cin >> id;
			if (n1 > 1) a[id]++;
		}
	}
	int m;
	cin >> m;
	int check = 0;
	for (int i = 0; i < m; i++) {
		int id = 0;
		cin >> id;
		if (a[id] == 0) {
			if (check != 0) cout << ' ';
			a[id]++;
			cout <<setfill('0') << setw(5)<<id;
			check++;
		}
	}
	if (check == 0) cout << "No one is handsome";

}