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
	int ans=0,x=1;
	char s[15];
	for(int i=0;i<13;i++){
		cin>>s[i];
	}
	for(int i=0;i<11;i++){
		if(i!=1&&i!=5){
			ans+=(s[i]-48)*x;
			x++;
		}
	}
	if(ans%11==s[12]-48||(s[12]=='X'&&ans%11==10)){
		cout<<"Right"<<endl;
	}else{
		for(int i=0;i<12;i++)
		cout<<s[i];
		if(ans%11==10)
		cout<<"X"<<endl;
		cout<<ans%11<<endl;
	}

    return 0;
}