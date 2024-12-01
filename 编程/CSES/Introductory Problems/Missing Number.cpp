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
int arr[200500];
int main()
{
	
	int n;
	cin>>n;
	for(int i=0;i<200500;i++){
		arr[i]=0;
	}
	int num;
	for(int i=0;i<n-1;i++){
		cin>>num;
		arr[num]++;
	}
	for(int i=1;i<=n;i++){
		if(arr[i]!=1){
		 	cout<<i<<endl;
		 	return 0;
		}
	}
    return 0;
}