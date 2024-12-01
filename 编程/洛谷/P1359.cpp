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
int arr[300][300],brr[300]={0};
int main()
{
	int n,j=1,a,ans=0;
	cin>>n;
	while(j<n){
		for(int i=0;i<j;i++){
			arr[i][j]=0;
		}
		for(int i=j;i<n;i++){
			cin>>a;
			arr[i][j]=a-arr[i-1][j];
		}
		j++;
	}
	/*for(int i=1;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[j][i]<<" ";
		}
		cout<<endl;
	}*/
	for(int i=0;i<n;i++){
		int mn=oo;
		for(int j=1;j<n;j++){
			if(arr[i][j]!=0)
				mn=min(mn,arr[i][j]);
		}
		brr[i]=mn;
	}
	for(int i=1;i<n;i++){
		//cout<<brr[i]<<" ";
		ans+=brr[i];
	}
	cout<<ans<<endl;
    return 0;
}