#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool ispower(ll y,ll x){
	ll res1 = log(y) / log(x); 
    double res2 = log(y) / log(x); // Note : this is double 
  
    // compare to the result1 or result2 both are equal 
    return res1 == res2;
}

//ll util(ll n){
//	
//	ll ans=0;
//	while(n>1){
//		if(n==3) return ans+2;
//		else if(n>1 && n<6) return 0;
//		else if(ispower(n,6)) {
//			ans=ans+1;n=n/6;
//			cout<<n<<" ";
//		}
//		else if(ispower(2*n,6)){
//			ans=ans+2;n=(2*n)/6;
//			cout<<n<<" ";
//		}
//		else if(n%6==0){
//			n=n/6;ans=ans+1; 
//		}
//		
//		else return 0;
//	}
//	return ans;
//}

ll util(ll n){
	
	ll ans=0;
	while(n>1){
		if(n%3==0){
		if(n%6==0) n=n/6;
		else n=n*2;
		ans++;
		}
		else{
			ans=-1;break;
		}
	}
	return ans;
}


int main(){
	ll tc;cin>>tc;
	while(tc--){
    ll n;cin>>n;
    ll ans=util(n);
    cout<<ans<<endl;
		
		
	
		
	}
	
}
