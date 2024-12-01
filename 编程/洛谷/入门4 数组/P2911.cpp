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
	int arr[20000];
	int s1,s2,s3,mx=0,st;
	for(int i=1;i<20000;i++){
		arr[i]=0;
	}
	cin>>s1>>s2>>s3;
	for(int i=1;i<=s1;i++){
		for(int j=1;j<=s2;j++){
			for(int k=1;k<=s3;k++){
				arr[i+j+k]++;
			}
		}
	}
	for(int i=3;i<=s1*s2*s3;i++){
		if(arr[i]>mx){
			mx=arr[i];
			st=i;
		}
	}
	cout<<st<<endl;
    return 0;
}