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
	double s,d=0,a;
	int t,n,cnt;
	cin>>s;
	t=0;
	cnt=3;
	while(d<s){
		a=1;
		n=t;
		while(n--){
			a*=0.98;
		}
		d+=2*a;
		t++;
	}
	cout<<t<<endl;
    return 0;
}