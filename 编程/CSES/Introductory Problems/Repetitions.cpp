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
	cin>>s;
	int mx=0,cnt=1;
	for(int i=1;i<s.size();i++){
		if(s[i]==s[i-1]){
			cnt++;
		}else{
			mx=max(mx,cnt);
			cnt=1;
		}
	}
	mx=max(mx,cnt);
	cout<<mx<<endl;
    return 0;
}