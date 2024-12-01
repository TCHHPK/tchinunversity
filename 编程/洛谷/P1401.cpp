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
	long long x1,x2,y1,y2;
	cin>>x1>>x2;
	cin>>y1>>y2;
	if(x1*y1>2147483647||x1*y2>2147483647||y1*x2>2147483647||y2*x2>2147483647){
		cout<<"long long int"<<endl;
	}else if(x1*y1<-2147483648||x2*y1<-2147483648||x1*y2<-2147483648||x2*y2<-2147483648){
		cout<<"long long int"<<endl;
	}else{
		cout<<"int"<<endl;
	}
    return 0;
}