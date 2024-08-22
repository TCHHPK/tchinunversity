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
int arr[2000500]={0};
int main()
{
	double a;
	int t,x,n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>t;
		for(int j=1;j<=t;j++){
			x=floor(a*j);
			arr[x]++;
		}
	}
	for(int i=0;i<=2000000;i++){
		if(arr[i]%2==1){
			cout<<i<<endl;
		}
	}

    return 0;
}