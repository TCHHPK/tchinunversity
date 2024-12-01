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
	int n,arr[1050];
	vector<int> vt;
	cin>>n;
	cin>>arr[0];
	for(int i=1;i<n;i++){
		cin>>arr[i];
		vt.push_back(abs(arr[i]-arr[i-1]));
	}
	sort(vt.begin(),vt.end());
	for(int i=1;i<n;i++){
		if(vt[i-1]!=i){
			cout<<"Not jolly"<<endl;
			return 0;
		}
	}
	cout<<"Jolly"<<endl;
    return 0;
}