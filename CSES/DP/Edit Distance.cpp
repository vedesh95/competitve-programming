#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
vector<vector<int> > dp(5001,vector<int>(5001,-1));
int util(string &s1,string &s2,int i,int j){
	if(i==0) return j;
	if(j==0) return i;
	if(dp[i][j]!=-1) return dp[i][j];
	if(s1[i-1]==s2[j-1]) return dp[i][j]=util(s1,s2,i-1,j-1);
	return dp[i][j]=1+min(util(s1,s2,i-1,j-1),min(util(s1,s2,i-1,j),util(s1,s2,i,j-1)));
}
 
int main(){
	string s1,s2;cin>>s1>>s2;
    cout<<util(s1,s2,s1.length(),s2.length())<<endl;
}
