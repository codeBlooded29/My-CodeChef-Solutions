#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define M 1000000007
int main(){
	ios::sync_with_stdio(true);
	ll int T,N;
	cin>>T;
	while(T--){
		cin>>N;
		vector<ll int> A(N);
		for(ll int &i:A){
			cin>>i;
			i=abs(i);
			if(i%2==1){
				i=0;
			}
			else if(i%4==0){
				i=2;
			}
			else{
				i=1;
			}
		}
		ll int total=N*(N+1);
		total>>=1;
		ll int minus=0,begin=0,end=0,idx=-1,tmp;
		while(end<N){
			if(A[end]>0){
				tmp=(idx-begin+1)*((end-1)-idx+1);
				minus+=tmp;
				if(A[end]==1){
					begin=idx+1;
					idx=end;
				}
				else{
					begin=end+1;
					idx=begin-1;
				}
			}
			end++;
		}
		tmp=(idx-begin+1)*((end-1)-idx+1);
		minus+=tmp;
		total-=minus;
		cout<<total<<endl;
	}
}
