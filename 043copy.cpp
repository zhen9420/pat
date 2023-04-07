#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int Hash[1005];
int last[1005];
int main(){
    int n;
    scanf("%d",&n);
    for(int k=0;k<n;k++){
        int no,h,m,tmp,times=0,cnt=0,t;
        char c;
        memset(Hash,-1,sizeof(Hash)); //每次将书号置零
        memset(last,0,sizeof(last));
        while(1){
            scanf("%d %c %d:%d",&no,&c,&h,&m);
            tmp = h*60 + m;
            if(no==0) { //退出
                printf("%d ",cnt);
                if(cnt > 0)
                    t = times*1.0/cnt + 0.5;
                else t = 0;
                printf("%d\n",t);
                break;
            }else if(c=='S'){ //开始 如果有两个S，应该以后面这个S作为标准
                Hash[no]=1;
                last[no]=tmp;
            }else if(Hash[no]==1&&c=='E'){ //结束
                Hash[no]=-1;
                times += (tmp - last[no]);
                cnt++;
            }  
        }
    }
    return 0;
}
 
