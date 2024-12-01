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
	int n,x,cnt=0,ans=0;
	n=1;
	while(n<=12){
		cnt+=300;
		cin>>x;
		if(cnt<x){
			cout<<-n<<endl;
			return 0;
		}
		cnt-=x;
		while(cnt>=100){
			ans+=100;
			cnt-=100;
		}
		n++;
	}
	cout<<cnt+ans/10*12<<endl;
    return 0;
}