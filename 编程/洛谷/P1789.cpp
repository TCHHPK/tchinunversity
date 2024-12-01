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
	bool bl[150][150];
	int x,y,o,p,cnt=0,n,m,k;
	for(int i=0;i<150;i++){
		for(int j=0;j<150;j++){
			bl[i][j]=0;
		}
	}
	cin>>n>>m>>k;
	for(int i=0;i<m;i++){
		cin>>x>>y;
		for(int i=y-2;i<=y+2;i++){
			bl[x][i]=1;
		}
		for(int i=x-2;i<=x+2;i++){
			bl[i][y]=1;
		}
		bl[x+1][y+1]=1;
		bl[x-1][y+1]=1;
		bl[x+1][y-1]=1;
		bl[x-1][y-1]=1;
		
	}
	for(int i=0;i<k;i++){
		cin>>o>>p;
		for(int i=o-2;i<=o+2;i++){
			for(int j=p-2;j<=p+2;j++){
				bl[i][j]=1;
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(bl[i][j]==0){
				cnt++;
				//cout<<bl[i][j];
			}	
		}
		//cout<<endl;
	}
	cout<<cnt<<endl;
    return 0;
}