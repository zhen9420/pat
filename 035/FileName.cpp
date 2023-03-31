#include<iostream>
using namespace std;
string n[1000];
int main(void) {
	int i = 0;
	while (1) {
		cin >> n[i];
		if (n[i]==".") break;
		i++;
	}
	if (i < 2) cout << "Momo... No one is for you ...";
	else if (i < 14) cout << n[1] << " is the only one for you...";
	else cout << n[1] << " and " << n[13] << " are inviting you to dinner...";
}