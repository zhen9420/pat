#include<iostream>
using namespace std;
struct student {
	int sex;
	string name;
	bool re;
};
int main(void) {
	student a[50];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i].sex >> a[i].name;
		a[i].re = false;
	}
	for (int i = 0; i < n/2; i++) {
		for (int j = n - 1; j >= 0; j--) {
			if (a[i].sex != a[j].sex && a[j].re == false) {
				cout << a[i].name << ' ' << a[j].name;
				a[j].re = true;
				if (i != n/2 -1) cout << endl;
				break;
			}
		}
	}

}