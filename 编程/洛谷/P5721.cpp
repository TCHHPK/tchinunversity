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
	int n,cnt=1;
	cin>>n;
	for(int i=n;i>0;i--){
		for(int j=i;j>0;j--){
			if(cnt<10){
				cout<<0<<cnt;
			}
			else{
				cout<<cnt;
			}
			cnt++;
		}
		cout<<endl;
	}
    return 0;
}