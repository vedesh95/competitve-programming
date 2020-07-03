#include<bits/stdc++.h>
using namespace std;
int main()
{
	int tc;cin>>tc;
	while(tc--)
	{

	int a;int b;cin>>a>>b;
	
	int res=a;
	for(int i=a+1;i<=b;i++)
	{
		res=res&i;
	}
	cout<<res<<endl;
	}
	
}
