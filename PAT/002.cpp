#include<iostream>
#include<algorithm>
using namespace std;
char a[500][1000];
int main(void) {
	int n;
	char x;
	cin >> n>>x;
	int row=1;
	int sum = 1;
	while(sum<n){
		row++;
		sum += 2 * ((row-1)*2 + 1);
		
	}
	
	if (sum != n) {
		sum -= 2 * ((row-1)*2 + 1);
		row--;
	}
	int l = row * 2 - 1;
	for (int i = 0; i < row; i++) {
		for (int j1 = 0; j1 < i; j1++) {
			a[i][j1] =' ';
		}
		for (int j2 = i; j2 < l -  i; j2++) {
			a[i][j2] = x;
		}
		/*for (int j3 = l - i - 1; j3 < i;j3++) {
			a[i][j3] = ' ';
		}*/
	}
	if (n >= 7) {


		for (int i = 0; i < row; i++) {
			for (int j = 0; j < l-i; j++) {
				cout << a[i][j];
			}
			cout << endl;
		}
		for (int i = row - 2; i >= 0; i--) {
			for (int j = 0; j < l -i; j++) {
				cout << a[i][j];
			}
			cout << endl;
		}

		cout << n - sum;	
	}
	else cout << x << endl << n-1;
	
}
