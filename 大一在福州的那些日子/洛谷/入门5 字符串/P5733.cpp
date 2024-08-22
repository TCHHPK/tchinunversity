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
	string s;
	//char c1='a',c2='A',c3='9';
	cin>>s;
	//cout<<(int)c1<<" "<<(int)c2<<" "<<(int)c3;
	for(int i=0;i<s.size();i++){
		if('a'<=s[i]&&s[i]<='z'){
			cout<<(char)(s[i]-32);
		}
		else{
			cout<<s[i];
		}
	}
	cout<<endl;
    return 0;
}