#include<iostream>
using namespace std;
struct student {
	string id;
	int n1;
	int n2;
};
int main(void) {
	student a[1000];
	int n, x;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i].id >> a[i].n1 >> a[i].n2;
	}
	cin >> x;
	int b[1000];
	for (int i = 0; i < x; i++) {
		cin >> b[i];
	}
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < n; j++) {
			if (b[i] == a[j].n1) {
				cout << a[j].id << ' ' << a[j].n2 << endl;
				break;
			}
		}
	}
}