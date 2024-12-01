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
bool bl[100050000]={0};
int a[10050000];
int main()
{
	int n,d1,d2,d3,d4,A,B;
	cin>>A>>B;
	a[1]=5,a[2]=7;
	n=3;
	for(d1=1;d1<=9;d1+=2){
		a[n]=d1*11;
		n++;
	}
	for(d1=1;d1<=9;d1+=2){
		for(d2=0;d2<=9;d2++){
			a[n]=d1*101+d2*10;
			n++;
		}
	}
	for(d1=1;d1<=9;d1+=2){
		for(d2=0;d2<=9;d2++){
			a[n]=d1*1001+d2*110;
			n++;
		}
	}
	for(d1=1;d1<=9;d1+=2){
		for(d2=0;d2<=9;d2++){
			for(d3=0;d3<=9;d3++){
				a[n]=d1*10001+d2*1010+d3*100;
				n++;
			}
		}
	}
	for(d1=1;d1<=9;d1+=2){
		for(d2=0;d2<=9;d2++){
			for(d3=0;d3<=9;d3++){
				a[n]=d1*100001*d2*10010+d3*1100;
				n++;
			}
		}
	}
	for(d1=1;d1<=9;d1+=2){
		for(d2=0;d2<=9;d2++){
			for(d3=0;d3<=9;d3++){
				for(d4=0;d4<=9;d4++){
					a[n]=d1*1000001+d2*100010+d3*10100+d4*1000;
					n++;
				}
			}
		}
	}
	for(d1=1;d1<=9;d1+=2){
		for(d2=0;d2<=9;d2++){
			for(d3=0;d3<=9;d3++){
				for(d4=0;d4<=9;d4++){
					a[n]=d1*10000001+d2*1000010+d3*100100+d4*11000;
					n++;
				}
			}
		}
	}

	for(int i=2;i<15000;i++){
		if(bl[i]==0){
			for(int j=i*i;j<=100005000;j+=i){
				bl[j]=1;
			}
		}
	}
	for(int i=1;i<=n;i++){
		if(A<=a[i]&&a[i]<=B){
			if(bl[a[i]]==0){
				cout<<a[i]<<endl;
			}
		}
	}
    return 0;
}