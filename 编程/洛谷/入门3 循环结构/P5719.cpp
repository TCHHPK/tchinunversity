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
	int n,k;
	double A=0,a=0,B=0,b=0;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		if(i%k==0){
			A+=i;
			a++;
		}else{
			B+=i;
			b++;
		}
	}
	cout<<fixed<<setprecision(1)<<A/a<<" "<<B/b<<endl;
    return 0;
}