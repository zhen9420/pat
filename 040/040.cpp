#include<iostream>
#include<iomanip>
using namespace std;
int main(void) {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		char sex; double h;
		cin >> sex >> h;
		if (sex == 'F') cout << fixed << setprecision(2) << h * 1.09;
		else cout << fixed << setprecision(2) << h / 1.09;
		if (i < N - 1) cout << endl;
	}
}