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
	int n,i=0,a,cnt;
	bool bl=1;
	cin>>n;
	while(cin>>a){
		cnt=a;
		if(bl==1){
			bl=0;
			while(cnt--){
				if(i<n){
					cout<<0;
					i++;
				}else{
					cout<<endl;
					cout<<0;
					i=1;
				}
			}
			
		}else{
			bl=1;
			while(cnt--){
				if(i<n){
					cout<<1;
					i++;
				}else{
					cout<<endl;
					cout<<1;
					i=1;
				}
			}
		}
	}
    return 0;
}