#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define M 1000000007
int main(){
	ios::sync_with_stdio(true);
	ll int T,X,K;
	cin>>T;
	while(T--){
		cin>>X>>K;
		ll int pf=0;
		ll int i=2;
		while(X%2==0){
			X/=2;
			pf++;
		}
		for(ll int i=3;i<=sqrt(X);i+=2){
			while(X%i==0){
				X/=i;
				pf++;
			}
		}
		if(X>1){
			X/=X;
			pf++;
		}
		
		if(pf>=K){
			cout<<1<<endl;
		}
		else{
			cout<<0<<endl;
		}
	}
}
