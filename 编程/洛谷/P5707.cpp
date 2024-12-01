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
	double s,v;
	cin>>s>>v;
	int t,c,hour,min;
	t=((s-1)/v)+1+10;
	c=32*60-t;
	if(c>=24*60){
		c=c-1440;
	}
	hour=c/60;
	min=c%60;
	if(hour<10){
		cout<<"0";
	}
	cout<<hour<<":";
	if(min<10){
		cout<<"0";
	}
	cout<<min<<'\n';
	return 0;
}