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
	int a[4];
	cin>>a[0]>>a[1]>>a[2];
	sort(a,a+3);
	cout<<a[0]/__gcd(a[0],a[2])<<'/'<<a[2]/__gcd(a[0],a[2])<<endl;
    return 0;
}