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
	int n,a[150],i=0;
	cin>>n;
	while(n!=1){
		a[i]=n;
		if(n%2==0){
			n/=2;
		}else{
			n*=3;
			n+=1;
		}
		i++;
	}
	cout<<1<<" ";
	while(i--){
		cout<<a[i]<<" ";
	}
    return 0;
}