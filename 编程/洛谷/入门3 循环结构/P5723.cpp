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
	int a[1050];
	bool bl[100500];
	int n,ans=0,cnt=0;
	cin>>n;
	for(int i=2;i<100500;i++){
		bl[i]=1;
	}
	for(int i=2;i<1050;i++){
		if(bl[i]){
			for(int j=2;i*j<100500;j++){
				bl[i*j]=0;
			}
		}
	}
	for(int i=2;ans+i<=n;i++){
		if(bl[i]){
			ans+=i;
			cout<<i<<endl;
			cnt++;
		}
	}
	cout<<cnt<<endl;
    return 0;
}