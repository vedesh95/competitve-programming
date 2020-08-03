#include <bits/stdc++.h>
#define ll long long int
using namespace std;


ll min(ll a,ll b){
    if(a<b) return a;
    else return b;
}

ll another(map<ll,ll> mp,ll small){

    vector<ll>arr;vector<ll> brr;

    // ll totalmismatched=0,minmismatched;
    // int j=0;

	for(auto i:mp){

// 		if(j==0) {minmismatched=i.first;j++;}
		if(i.second>0) {
			ll temp=i.second;
			if(temp%2!=0){return -1;}
			temp=temp/2;
			while(temp--){
			arr.push_back(i.first);
			}


 		}
		else if(i.second<0) {
			ll temp=abs(i.second);
			if(temp%2!=0){return -1;}
			temp=temp/2;
			while(temp--){
			brr.push_back(i.first);
			}

			

		}
// 		totalmismatched=totalmismatched+abs(i.second);

// 		if(i.first<minmismatched) minmismatched=i.first;

	} 

// 	totalmismatched=totalmismatched/2;

//     ll ans=0;
//     ll letit=0;
//     for(auto i:mp){
//         if(letit==0) {ans=(totalmismatched-abs(mp[i.first])/2)*i.first;letit++;}
//         ans=min(ans,(totalmismatched-abs(mp[i.first])/2)*i.first);
//   }
// 	if(mp.find(minmismatched)!=mp.end()){
// 		ans=(totalmismatched-abs(mp[minmismatched])/2)*minmismatched;
// 	}
	// else ans=totalmismatched-abs(mp[minmismatched]/2)*minmismatched;
        mp.clear();


	sort(arr.begin(),arr.end());
    sort(brr.begin(),brr.end(),greater<int>());
    ll count=0;ll last=small;
    // if (arr.size()>=1)  {last=min(arr[0],brr[0]);}
    // count+=last;
    for(ll i=0;i<arr.size();i++){
      
      count=count+min(2*last,min(arr[i],brr[i]));
        
    
     }
    return count;
	    
}

int32_t main() {
	// your code goes here
	ll tc;cin>>tc;
	while(tc--){
	    ll n;cin>>n;
	    
	    
	    map<ll,ll> mp;

        ll small=INT_MAX;
	    for(ll i=0;i<n;i++) {ll temp;cin>>temp;mp[temp]++;if(temp<small) small=temp;}
	    for(ll i=0;i<n;i++) {ll temp;cin>>temp;mp[temp]--;if(temp<small) small=temp;}
	    
	    ll ans=another(mp,small);
		cout<<ans<<endl;
	    
	    
	}
	return 0;
}


// 7
// 1
// 1
// 2
// 2
// 1 2
// 2 1
// 2
// 1 1
// 2 2
// 4 1 1 3 3 4 4 5 5 
// 4 2 2 3 3 4 4 5 5
// 4 1 1 1 3 1 3 5 5
// 5 1 1 1 1 2 1 1 2 3 3 


// -1
// 0
// 1
// 3
// 5
// 1
// 1
