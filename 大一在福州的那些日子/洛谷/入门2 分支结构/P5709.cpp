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
	int m,t,s,ans;
	cin>>m>>t>>s;
	if(t==0)
	cout<<0<<endl;
	else{
		ans=(m*t-s)/t;
		if(ans<0){
			cout<<0<<endl;
		}else
		cout<<ans<<endl;
	}
	return 0;
}