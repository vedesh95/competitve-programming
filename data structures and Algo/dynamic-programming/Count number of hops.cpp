#include <bits/stdc++.h>
using namespace std;
 
long long countWays(int);
 
int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		int n;
		cin>>n;
		
		cout << countWays(n) << endl;
	}
    
    return 0;
    
}
// } Driver Code Ends


// function to count number of ways to reach top of the stair
long long countWays(int n){
    
    // your code here
    int mod=1000000007;
    if(n==1) return 1;
    if(n==2) return 2;
    if(n==3) return 4;
    long long a=1,b=2,c=4;
    long long i=4;
    long long ans=0;
    while(i<=n){
        ans=(a+b+c)%mod;
        a=b%mod;b=c%mod;c=ans%mod;
        i++;
    }
    return ans;
    
    
}
