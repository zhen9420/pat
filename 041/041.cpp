#include<iostream>
using namespace std;
int main(void) {
	int i = 1;
	while (1) {
		string s;
		cin>>s;
		if (s == "250") {
			cout << i;
			break;
		}
		i++;
	}
}