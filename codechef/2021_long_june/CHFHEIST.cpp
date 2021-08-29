#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
 
int main(){
	ll tc;cin>>tc;
	while(tc--){
		ll D,d,P,Q;
		cin>>D>>d>>P>>Q;
		cout<<P*D+((D-d)/d)*d*Q+(D/d)*Q*(D%d)<<endl;
	}
}
