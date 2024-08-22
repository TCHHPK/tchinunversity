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
	int a,b,s,mx=0;
	for(int i=1;i<=7;i++){
		cin>>a>>b;
		if(a+b>8&&a+b>mx){
			s=i;
			mx=a+b;
		}
	}
	if(mx==0){
		cout<<0<<endl;
	}else{
		cout<<s<<endl;
	}

    return 0;
}