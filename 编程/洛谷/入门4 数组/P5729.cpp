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
	int w,x,h,q,x1,x2,y1,y2,z1,z2,cnt=0;
	bool bl[150][150][150]={{{0}}};
	cin>>w>>x>>h;
	cin>>q;
	while(q--){
		cin>>x1>>y1>>z1>>x2>>y2>>z2;
		for(int i=x1;i<=x2;i++){
			for(int j=y1;j<=y2;j++){
				for(int k=z1;k<=z2;k++){
					bl[i][j][k]=1;
				}
			}
		}
	}
	for(int i=1;i<=w;i++){
		for(int j=1;j<=x;j++){
			for(int k=1;k<=h;k++){
				if(bl[i][j][k]==0){
					cnt++;
				}
			}
		}
	}
	cout<<cnt<<endl;
}