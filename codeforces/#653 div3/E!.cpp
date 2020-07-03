#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll n,k;cin>>n>>k;
	
	vector<vector<int> > vec( n , vector<int> (3, 0));
	ll ac=0,bc=0;
	for(ll i=0;i<n;i++){
		cin>>vec[i][0]>>vec[i][1]>>vec[i][2];
		ac+=vec[i][1];
		bc=+=vec[i][2];
		
	}
	
	if(ac<k || bc<k) {
		cout<<"-1"<<endl;
		return 0;
	}
	sort(vec.begin(),vec.end());
	
	ll kac=0,kbc=0,i=0,ans=0;
    while(i<n && kac<k && kbc){
    	if(vec[i][1]==1 && vec[i][2]==1){
    		
		}
	}
	
	
	
	
	
	
		
	
	
}
