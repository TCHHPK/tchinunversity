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
	char c='0';
	string s[250];
	int cnt=0;
	cin>>s[0];
	for(int i=1;i<s[0].size();i++){
		cin>>s[i];
	}
	cout<<s[0].size();
	for(int i=0;i<s[0].size();i++){
		for(int j=0;j<s[0].size();j++){
			if(c==s[i][j]){
				cnt++;
			}else{
				c=s[i][j];
				cout<<" "<<cnt;
				cnt=1;
			}
		}
	}
	cout<<" "<<cnt;
    return 0;
}