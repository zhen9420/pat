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
        memset(Hash,-1,sizeof(Hash)); //ÿ�ν��������
        memset(last,0,sizeof(last));
        while(1){
            scanf("%d %c %d:%d",&no,&c,&h,&m);
            tmp = h*60 + m;
            if(no==0) { //�˳�
                printf("%d ",cnt);
                if(cnt > 0)
                    t = times*1.0/cnt + 0.5;
                else t = 0;
                printf("%d\n",t);
                break;
            }else if(c=='S'){ //��ʼ ���������S��Ӧ���Ժ������S��Ϊ��׼
                Hash[no]=1;
                last[no]=tmp;
            }else if(Hash[no]==1&&c=='E'){ //����
                Hash[no]=-1;
                times += (tmp - last[no]);
                cnt++;
            }  
        }
    }
    return 0;
}
 
