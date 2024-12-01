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
	int l,m,a,b,cnt=0;
	bool bl[10050]={0};
	cin>>l>>m;
	for(int i=0;i<m;i++){
		cin>>a>>b;
		for(int j=a;j<=b;j++){
			bl[j]=1;
		}
	}
	for(int i=0;i<=l;i++){
		if(bl[i]==0){
			cnt++;
		}
	}
	cout<<cnt<<endl;
    return 0;
}