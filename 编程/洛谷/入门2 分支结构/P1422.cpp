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
	double ans;
	cin>>n;
	if(n<=150){
		ans=n*0.4463;
	}else if(n<=400){
		ans=150*0.4463+(n-150)*0.4663;
	}else{
		ans=150*0.4463+250*0.4663+(n-400)*0.5663;
	}
	cout<<fixed<<setprecision(1)<<ans<<endl;
    return 0;
}