#include<iostream>
#include<string>
using namespace std;
int main(void) {
	string s1;
	string s2;
	int a[10000] = {0};
	getline(cin, s1);
	getline(cin, s2);
	for (int i = 0; i < s1.length(); i++) {
		for (int j = 0; j < s2.length(); j++) {
			if (s1[i] == s2[j]) {
				a[i] =1;
				break;
			}
		}
	}
	for (int i = 0; i < s1.length(); i++) {
		if (a[i] != 1) cout << s1[i];
	}
}