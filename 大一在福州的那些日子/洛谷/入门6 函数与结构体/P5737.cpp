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
bool chk(int n){
	if(n%4==0&&(n%100!=0||n%400==0))
		return 1;
	
	return 0;
}
int arr[3000];
int main()
{
	int x,y,cnt=0,k=0;
	cin>>x>>y;
	for(int i=x;i<=y;i++){
		if(chk(i)){
			cnt++;
			arr[k]=i;
			k++;
		}
	}
	cout<<cnt<<endl;
	for(int i=0;i<k;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

    return 0;
}