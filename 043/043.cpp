#include<iostream>
#include<string>
#include<cmath>
using namespace std;
struct day {
	int times=0;
	int time=0;
	int atime=0;
};
struct date {
	bool bor = false;
	bool ret=false;
	
	string btime;
	string rtime;
};
day a[11];
int toltime(string bt, string rt);
int main(void) {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		date b[1010];
		string lj;
		while (1) {
			;
			int id; cin >> id;
			if (id == 0) {
				getline(cin, lj);//处理不需要的数据；
				break;
			}
			char keyValue;
			cin >> keyValue;
			if (keyValue == 'S') {
				b[id].bor = true;
				cin >> b[id].btime;
			}
			else {
				if (b[id].bor == true) {

					b[id].ret = true;
					cin >> b[id].rtime;
				}
				else getline(cin, lj);//处理不需要的lj数据；
			}
			if (b[id].bor == true && b[id].ret == true) {
				b[id].bor = false;
				b[id].ret = false;
				a[i].times++;
				a[i].time += toltime(b[id].btime, b[id].rtime);
			}
		}
		if(a[i].times!=0) a[i].atime = round(a[i].time*1.0 / a[i].times);
	}
	for (int i = 0; i < n; i++) {
		cout << a[i].times << ' ' << a[i].atime;
		if (i < n - 1) cout << endl;
	}
}
int toltime(string bt, string rt) {
	int bg=0, en=0;
	bg = (bt[0] - '0') * 600 + (bt[1]-'0') * 60 + (bt[3] * 10-'0') + bt[4];
	en = (rt[0] - '0') * 600 + (rt[1] - '0') * 60 + (rt[3] * 10 - '0') + rt[4];
	return en - bg;
}