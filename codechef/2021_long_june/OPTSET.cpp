#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

vector<int> ans;
int fans=0;
void getutil(vector<int> &arr,int k,int i,vector<int> temp,int rox){
	if(k==0 && rox>fans) {fans=rox;ans=temp;return;}
	if(i<0 || i<k-1) return;
	getutil(arr,k,i-1,temp,rox);
	temp.push_back(arr[i]);rox=rox^arr[i];
	getutil(arr,k-1,i-1,temp,rox);
}

int main(){
	int tc;cin>>tc;
	while(tc--){
		ans.clear();fans=0;
		int n,k;cin>>n>>k;
		vector<int> arr(n);
		for(int i=0;i<n;i++) arr[i]=i+1;
		
		vector<int> temp;int rox=0;
		getutil(arr,k,n-1,temp,rox);
		
		for(int i=0;i<k;i++) cout<<ans[k]<" ";
		cout<<endl;
	}
}
