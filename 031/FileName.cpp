#include<iostream>
using namespace std;
struct human {
	int height;
	int weight;
	double bmi;
};
int main(void) {
	int x;
	cin >> x;
	human a[20];
	for (int i = 0; i < x; i++) {
		cin >> a[i].height >> a[i].weight;
		a[i].bmi = (a[i].height - 100) * 0.9 * 2;
	}
	for (int i = 0; i < x; i++) {
		if (a[i].bmi * 0.1 >a[i].weight-a[i].bmi && a[i].bmi - a[i].weight<0.1 * a[i].bmi) {
			cout << "You are wan mei!";
			if (i != x - 1) cout << endl;
		}
		else if (a[i].bmi * 0.1 <= a[i].weight - a[i].bmi) {
			cout << "You are tai pang le!";
			if (i != x - 1) cout << endl;
		}
		else if (a[i].bmi - a[i].weight >= 0.1 * a[i].bmi) {
			cout << "You are tai shou le!";
			if (i != x - 1) cout << endl;
		}
	}
}