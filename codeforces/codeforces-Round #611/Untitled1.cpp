#include<bits/stdc++.h>
using namespace std;
int main()
{
	int tc;cin>>tc;
	while(tc--)
	{
		int n;int k;
		cin>>n>>k;
		if(n%k==0) cout<<n<<endl;
		else
		{
			int k1=floor(n-k/2);
			int remain=k1%k;
			cout<<n-remain<<endl;
		}
	}
}
