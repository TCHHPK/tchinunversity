#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define N 100005
#define oo 0x3f3f3f3f
#define ool 0x3f3f3f3f3f3f3f3f
#define P (998244353)
#define F first
#define S second
#define pii pair<int, int>
#define lowbit(x) (x & -x)
#define max(a, b) (a < b ? b : a)
#define min(a, b) (a > b ? b : a)
#define HPK  ios::sync_with_stdio(0);cin.tie(0);
int main()
{
	int m,y;
	bool bl=0;
	cin>>y>>m;
	if(y%400==0){
		bl=1;
	}else if(y%4==0&&y%100!=0){
		bl=1;
	}
	if(bl==1){
		if(m==2){
			cout<<29<<endl;
		}
		else if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
			cout<<31<<endl;
		}
		else
			cout<<30<<endl;
	}
	else{
		if(m==2){
			cout<<28<<endl;
		}
		else if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
			cout<<31<<endl;
		}
		else
			cout<<30<<endl;
	}

    return 0;
}