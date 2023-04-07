#include<iostream>
using namespace std;
int main(void) {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		string name;
		int b, m;
		cin >> name >> b >> m;
		if (b > 20 || b < 15 || m < 50 || m>70) {
			cout << name << endl;
		}
	}
}