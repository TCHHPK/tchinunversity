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
	int cnt=1,n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(cnt<10){
				cout<<"0"<<cnt;
			}else{
				cout<<cnt;
			}
			cnt++;
		}
		cout<<endl;
	}
	cout<<endl;
	cnt=1;
	for(int i=1;i<=n;i++){
		for(int j=n-i;j>0;j--){
			cout<<"  ";
		}
		for(int j=0;j<i;j++){
			if(cnt<10){
				cout<<"0"<<cnt;
			}else{
				cout<<cnt;
			}
			cnt++;
		}
		cout<<endl;
	}
    return 0;
}