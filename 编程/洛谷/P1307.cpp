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
	int n,cnt=0,s[15];
	bool bl=0;
	cin>>n;
	if(n<0)
		cout<<"-";
	if(n==0){
		cout<<0<<endl;
		return 0;
	}
	while(n){
		s[cnt]=n%10;
		n/=10;
		cnt++;
	}
	for(int i=0;i<cnt;i++){
		if(bl==0){
			if(s[i]!=0){
				cout<<abs(s[i]);
				bl=1;
			}
		}else{
			cout<<abs(s[i]);
		}
	}
	cout<<endl;
    return 0;
}