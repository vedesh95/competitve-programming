#include <bits/stdc++.h>
using namespace std;

int setbit(int n)
{
    vector<int> dp(n+1,INT_MIN);
    dp[0]=0;dp[1]=1;dp[2]=1;dp[3]=2;
    int i=1;
    while(i<=n)
    {
        dp[i]=1;i=i*2;
    }
    for(i=4;i<=n;i++)
    {
        if(dp[i]==INT_MIN)
        {
            if(i%2!=0) dp[i]=dp[i/2]+1;
            else dp[i]=dp[i/2];
        }
    }
    int count=0;
    for(i=0;i<=n;i++) count+=dp[i];
    return count;
    
}
int main() {
	//code
	int tc;cin>>tc;
	while(tc--)
	{
	    
	    int n;cin>>n;
	    cout<<setbit(n)<<endl;
	}
	return 0;
}
