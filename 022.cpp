#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int odd=0;
	int even = 0;
	for(int i = 0;i<n;i++){
		int x;
		cin>>x;
		if(x%2==0) even++;
		else odd++;
		
	}
	cout<<odd<<' '<<even;
}
