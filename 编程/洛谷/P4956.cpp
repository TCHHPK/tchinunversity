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
	int n,x,k;
	cin>>n;
	x=n/52/7;
	k=(n-52*7*x)/21;
	if(k==0){
		k++;
		x-=3;
	}
	while(x>100){
		x-=3;
		k++;
	}
	cout<<x<<endl;
	cout<<k<<endl;
    return 0;
}