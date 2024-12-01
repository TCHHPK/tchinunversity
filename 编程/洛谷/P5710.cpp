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
	int x;
	bool bl1,bl2;
	
	cin>>x;
	if(x%2==0)
	bl1=1;
	else
	bl1=0;
	if(4<x&&x<=12)
	bl2=1;
	else
	bl2=0;
	
	if(bl1&&bl2)
	cout<<"1 ";
	else
	cout<<"0 ";
	
	if(bl1||bl2)
	cout<<"1 ";
	else
	cout<<"0 ";
	
	if(bl1+bl2==1)
	cout<<"1 ";
	else
	cout<<"0 ";
	
	if(bl1+bl2==0)
	cout<<"1 ";
	else
	cout<<"0 ";
	
    return 0;
}