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
	int n,l,r,cnt=0;
	int arr[150];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	for(int i=0;i<n;i++){
		l=0,r=n-1;
		while(arr[l]!=arr[r]){
			if(arr[l]+arr[r]<arr[i]){
				l++;
			}else if(arr[l]+arr[r]>arr[i]){
				r--;
			}else if(arr[l]!=arr[i]&&arr[r]!=arr[i]){
				cnt++;
				break;
			}
		}
	}
	cout<<cnt<<endl;
    return 0;
}