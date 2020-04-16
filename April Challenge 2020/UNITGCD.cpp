#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define M 1000000007
int main(){
	ios::sync_with_stdio(true);
	int T,N;
	cin>>T;
	while(T--){
		cin>>N;
		if(N>1){
			cout<<(N>>1)<<endl;
		}
		else{
			cout<<N<<endl;
		}
		if(N==1){
			cout<<1<<" "<<1<<endl;
		}
		else if(N==2){
			cout<<2<<" "<<1<<" "<<2<<endl;
		}
		else{
			cout<<3<<" "<<1<<" "<<2<<" "<<3<<endl;
			for(int i=4;i<=N;i+=2){
				if(i+1<=N){
					cout<<2<<" "<<i<<" "<<(i+1)<<endl;
				}
				else{
					cout<<1<<" "<<i<<endl;
				}
			}
		}
	}
}
