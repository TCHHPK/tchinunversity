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
	int n,a1,a2,a3,b1,b2,b3,mn=oo;
	cin>>n;
	cin>>a1>>b1;
	cin>>a2>>b2;
	cin>>a3>>b3;
	mn=min(mn,((n-1)/a1+1)*b1);
	mn=min(mn,((n-1)/a2+1)*b2);
	mn=min(mn,((n-1)/a3+1)*b3);
	cout<<mn<<endl;
    return 0;
}