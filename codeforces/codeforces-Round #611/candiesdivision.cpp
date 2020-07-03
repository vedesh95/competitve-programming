#include<bits/stdc++.h>
using namespace std;
int main()
{
	long tc;cin>>tc;
	while(tc--)
	{
		long n;long k;
		cin>>n>>k;
		if(n%k==0) cout<<n<<endl;
		else
		{
			long k1=floor(n-k/2);
			long remain=k1%k;
			cout<<n-remain<<endl;
		}
	}
}
