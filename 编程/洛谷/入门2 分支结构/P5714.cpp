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
	int m;
	double h,bmi;
	cin>>m>>h;
	bmi=m/h/h;
	if(bmi<18.5)
	cout<<"Underweight"<<endl;
	else if(24<=bmi){
		cout<<setprecision(6)<<bmi<<endl;
		cout<<"Overweight"<<endl;	
	}
	else
	cout<<"Normal"<<endl;
    return 0;
}