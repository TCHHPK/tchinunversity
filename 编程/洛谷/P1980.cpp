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
	int n,x,cnt=0,p;
	cin>>n>>x;
	for(int i=1;i<=n;i++){
		p=i;
		while(p>0){
			if(p%10==x){
				cnt++;
			}
			p/=10;
		}
	}
	cout<<cnt<<endl;
    return 0;
}