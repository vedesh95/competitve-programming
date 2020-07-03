#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()

{
	ll tc;cin>>tc;
	while(tc--)
	{
		ll m,n;cin>>m>>n;
		ll a,b;cin>>a>>b;
		cout<<min(abs(m-n)*a+min(m,n)*b,(m+n)*a)<<endl;
        //cout<<max(m,n)*min(a,b) + (m+n-max(m,n))*max(a,b)<<endl;
	}
}
