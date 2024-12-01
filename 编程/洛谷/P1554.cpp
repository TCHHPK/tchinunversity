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
int arr[15];
int main()
{
	int m,n,s;
	cin>>m>>n;
	for(int i=m;i<=n;i++){
		s=i;
		while(s){
			arr[s%10]++;
			s/=10;
		}
	}
	for(int i=0;i<=9;i++){
		cout<<arr[i]<<" ";
	}
    return 0;
}