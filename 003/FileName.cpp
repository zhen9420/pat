#include<iostream>¡¢
#include<string>
using namespace std;
int num[10] = { 0 };

int main(void) {
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		for (int j = 0; j < 10; j++) {
			if (s[i] - '0' == j) {
				num[j]++;
				break;
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		if (num[i])	cout << i << ':' << num[i] << endl;
	}

}