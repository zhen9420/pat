#include<iostream>
#include<string>
using namespace std;
int weight[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };

	int main(void) {
		char code[12] = { "10X98765432" };
		int n=0;
		cin >> n;
		string s[100];
		for (int i = 0; i < n; i++) {
			cin >> s[i];
		}
		int check = 0;
		for (int i = 0; i < n; i++) {
			int sum = 0;
			int average = 0;
			for (int j = 0; j < 17; j++) {
				sum += (s[i][j] - '0') * weight[j];
				if (s[i][j] < '0' || s[i][j] > '9') {
					cout << s[i]<<endl;
					check++;
					break;
				}
				else if (j == 16) {
					average = sum % 11;
					if (code[average] != s[i][17]) {
						cout << s[i]<<endl;
						check++;
					}
				}
			}
			if (i == n - 1 && check == 0) {
				cout << "All passed";
			}
		}

}