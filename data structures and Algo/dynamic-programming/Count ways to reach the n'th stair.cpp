#include<bits/stdc++.h>
using namespace std;

long long mod = 1000000007;

long long countWays(int);

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int m;
        cin>>m;
        cout<<countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}
// } Driver Code Ends


// function to count ways to reach mth stair
long long countWays(int m){
    // your code here
     if(m==1) return 1;
     if(m==2) return 2;
     long long i=3;
     long long a=1,b=2;
     long long ans=0;
     while(i<=m){
         i++;
         ans=(a+b)%1000000007;
         a=b%1000000007;b=ans%1000000007;
     }
     return ans;
}
