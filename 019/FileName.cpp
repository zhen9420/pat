#include<iostream>
using namespace std;
int main(void) {
	int va, vb;
	cin >> va >> vb;
	int n;
	cin >> n;
	int a = 0, b = 0;
	for (int i = 0; i < n; i++) {
		int as, ah, bs, bh,sum;
		cin >> as >> ah >> bs >> bh;
		sum = as + bs;
		if (ah == sum && bh == sum) continue;
		else if (ah == sum) {
			a++;
		}
		else if (bh == sum) {
			b++;
		}
		if (a > va) {
			cout << 'A' << endl << b;
			break;
		}
		if (b > vb) {
			cout << 'B' <<endl << a;
			break;
		}
	}
}
