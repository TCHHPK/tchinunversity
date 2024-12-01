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
	int n;
	double A=1,B=1,ans=0,a=(1+sqrt(5))/2,b=(1-sqrt(5))/2;
	cin>>n;
	for(int i=0;i<n;i++){
		A*=a;
		B*=b;
	}
	ans=(A-B)/sqrt(5);
	cout<<fixed<<setprecision(2)<<ans<<endl;
    return 0;
}