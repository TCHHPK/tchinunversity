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
	int n,m,mn=oo,a;
	int arr[5000];
	cin>>n>>m;
	arr[0]=0;
	for(int i=1;i<n+1;i++){
		cin>>a;
		arr[i]=arr[i-1]+a;
	}
	for(int i=m;i<n+1;i++){
		mn=min(arr[i]-arr[i-m],mn);
	}
	cout<<mn<<endl;
    return 0;
}