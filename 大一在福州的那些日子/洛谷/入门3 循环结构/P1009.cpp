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
	int n,a[90]={0},b[90]={0},c[90]={0},f[90]={0},d=0,la,lb=1,lc=1,lans,m=1,p;
	cin>>n;
	b[0]=1;
	for(int i=1;i<=n;i++){
		la=0;
		p=i;
		while(p>0){
			a[la]=p%10;
			p/=10;
			la++;
		}
		for(int j=0;j<la;j++){
			for(int k=0;k<=lb;k++){
				c[j+k]+=a[j]*b[k];
			}
		}
		for(int j=0;j<lc;j++){
			if(c[j]>9){
				c[j+1]+=c[j]/10;
				c[j]%=10;
			}
		}
		if(c[lc]){
			lc++;
		}
		lans=lb;
		lb=lc;
		m=max(m,lc);
		for(int k=lc-1;k>=0;k--){
			b[k]=c[k];
		}
		lc=la+lans;
		memset(c,0,sizeof(c));
		for(int j=0;j<m;j++){
			f[j]+=b[j];
			if(f[j]>9){
				f[j+1]+=f[j]/10;
				f[j]%=10;
			}
		}
		while(!f[m]&&m>0)
		m--;
		for(int i=m;i>=0;i--){
			cout<<f[i];
		}
		return 0;
	}
    return 0;
}