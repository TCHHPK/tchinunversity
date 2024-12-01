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
	int a[5],A,B,C;
	char c[5];
	cin>>a[0]>>a[1]>>a[2];
	sort(a,a+3);
	cin>>c;
	A=a[0];B=a[1];C=a[2];
	for(int i=0;i<3;i++){
		if(c[i]=='A'){
			cout<<A<<" ";
		}
		if(c[i]=='B'){
			cout<<B<<" ";
		}
		if(c[i]=='C'){
			cout<<C<<" ";
		}
	}
	cout<<endl;
    return 0;
}