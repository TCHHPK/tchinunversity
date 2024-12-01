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
	int q,j,n,a,b;
	string str,s,x;
	cin>>q;
	cin>>str;
	while(q--){
		cin>>n;
		if(n==1){
			cin>>s;
			str+=s;
			cout<<str<<endl;
		}else if(n==2){
			cin>>a>>b;
			x="";
			for(int i=a;i<a+b;i++){
				x+=str[i];
			}
			str=x;
			cout<<str<<endl;
		}else if(n==3){
			cin>>a>>s;
			x="";
			for(int i=0;i<a;i++){
				x+=str[i];
			}x+=s;
			for(int i=a;i<str.size();i++){
				x+=str[i];
			}
			str=x;
			cout<<str<<endl;
		}else if(n==4){
			cin>>s;
			j=1;
			for(int i=0;i<str.size();i++){
				if(s[j]==str[i]){
					j++;	
				}else{
					j=0;
				}
				if(j==s.size()){
					cout<<i-j+1<<endl;
					return 0;
				}
			}
			cout<<-1<<endl;
			return 0;
		}
	}

    return 0;
}