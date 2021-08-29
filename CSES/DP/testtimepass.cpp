#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
 
int main(){
	ll x=255;
	ll xx=x;
	for(int i=1;i<9;i++){
		xx=(xx*x)%mod;
		cout<<i<<" "<<xx<<" ";
	}
}
