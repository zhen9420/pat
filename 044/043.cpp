#include<iostream>
using namespace std;
int main(void) {
	int k;
	cin >> k;
	int t = 1;
	while (1) {
		string s;
		cin >> s;
		if (s == "End") break;
		
		else if ( t % (k+1) == 0) {
			cout << s << endl;
		}
		else if (s == "ChuiZi") {
			cout << "Bu" << endl;
		}
		else if (s == "Bu") {
			cout << "JianDao" << endl;
		}
		else if (s == "JianDao") {
			cout << "ChuiZi" << endl;
		}
		t++;
	}
}