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
	int n,a,mx=0,mn=oo;
	double ans;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		ans+=a;
		mx=max(a,mx);
		mn=min(a,mn);
	}
	cout<<fixed<<setprecision(2)<<(ans-mx-mn)/(n-2)<<endl;
    return 0;
}