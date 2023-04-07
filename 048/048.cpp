#include<iostream>
#include<vector>
using namespace std;

int main(void) {
	int ra, ca;
	cin >> ra >> ca;
	vector<vector<int>> a(ra, vector<int>(ca));
	for (int i = 0; i < ra; i++) {
		for (int j = 0; j < ca; j++) {
			cin >> a[i][j];
		}
	}
	int rb, cb;
	cin >> rb >> cb;
	vector<vector<int>> b(rb, vector<int>(cb));
	vector<vector<int>> c(ra, vector<int>(cb));
	for (int i = 0; i < rb; i++) {
		for (int j = 0; j < cb; j++) {
			cin >> b[i][j];
		}
	}
	if (ca != rb) {
		cout << "Error: " << ca << " != " << rb;
	}
	else{
		cout << ra << ' ' << cb << endl;
		for (int i = 0; i < ra; i++) {
			for (int j = 0; j < cb; j++) {
				for (int t = 0; t < ca; t++) {
					c[i][j] += a[i][t] * b[t][j];
				}
			}
		}
		for (int i = 0; i < ra; i++) {
			for (int j = 0; j < cb; j++) {
				if (j != 0) cout << ' ';
				cout << c[i][j];
			}
			if(i!=ra-1) cout << endl;
		}
	}
}