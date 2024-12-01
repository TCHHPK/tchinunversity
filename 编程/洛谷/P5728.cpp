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
	int n,cnt=0,a[1050],b[1050],c[1050],sum[1050];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i]>>c[i];
		sum[i]=a[i]+b[i]+c[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(i!=j){
				if(abs(a[i]-a[j])<6)
					if(abs(b[i]-b[j])<6)
						if(abs(c[i]-c[j])<6)
							if(abs(sum[i]-sum[j])<11)
								cnt++;	
			}
		}
	}
	cout<<cnt<<endl;
    return 0;
}