#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	int sum = 0;
	int fst = a;
	for (int i = a; i <= b; i++) {
		cout <<resetiosflags(ios::right)<< setfill(' ')<<setw(5)<<i;
		sum += i;
		if (i - fst != 0 && (i - fst) % 4 == 0) {
			fst = i + 1;
			cout << endl;
		}
	}
	cout << endl << "Sum = " << sum;
}