#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
int main(void) {
	string s;
	cin >> s;
	cout << s.substr(6, 4) <<'-' << s.substr(0, 2)<<'-'<<s.substr(3,2);
}