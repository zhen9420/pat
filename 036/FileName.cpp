#include<iostream>
#include<iomanip>
using namespace std;
int main(void) {
	int a, b;
	cin >> a >> b;
	if (b == 0) cout << a << '/' << b <<'='<< "Error";
	else {
		double c = a * 1.0 / b;
		if (b < 0) cout << a << '/' << '(' << b << ')' << '=' << fixed << setprecision(2) << c;
		if (b > 0) cout << a << '/'  << b <<  '=' << fixed << setprecision(2) << c;
		
	}
}