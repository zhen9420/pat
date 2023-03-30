#include<iostream>
using namespace std;
char pnum[11];
int main(void) {
	int count[10] = { 0 };
	int arrnum = 0;
	for (int i = 0; i < 11; i++) {
		cin >> pnum[i];
		for (int j = 0; j < 10; j++) {
			if (pnum[i]- '0' == j&&count[j]==0) {
				count[j]++;
				arrnum++;
				break;
			}
		}
	}
	int arrn = arrnum;
	cout << "int[] arr = new int[]{";
	for (int i = 9; i >=0; i--) {
		if (count[i] > 0) {
			cout << i;
			count[i] = arrnum;
			if (arrnum > 1) cout << ',';
			arrnum--;
			
		}
		if (arrnum == 0) break;
	}
	cout << "};";
	cout << endl;
	cout << "int[] index = new int[]{";
	for (int i = 0; i < 11; i++) {
		cout << arrn-count[pnum[i]-'0'];
		if (i < 10) cout << ',';
	}
	cout << "};";
	
}