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
	int n,r,l;
	int arr[40][40];
	for(int i=0;i<40;i++){
		for(int j=0;j<40;j++){
			arr[i][j]=0;
		}
	}
	cin>>n;
	r=1;l=(n+1)/2;arr[r][l]=1;
	for(int k=2;k<=n*n;k++){
		if(r==1&&l!=n){
			arr[n][l+1]=k;
			r=n;l=l+1;
			
		}else if(r!=1&&l==n){
			arr[r-1][1]=k;
			r=r-1;l=1;
		}else if(r==1&&l==n){
			arr[r+1][l]=k;
			r=r+1;l=l;
		}else if(r!=1&&l!=n){
			if(arr[r-1][l+1]==0){
				arr[r-1][l+1]=k;
				r=r-1;l=l+1;
			}else{
				arr[r+1][l]=k;
				r=r+1;l=l;
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
    return 0;
}