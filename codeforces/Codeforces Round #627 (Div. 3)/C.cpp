#include<bits/stdc++.h>
using namespace std;
int main()
{
	int tc;cin>>tc;
	while(tc--)
	{
		string str;cin>>str;
		int n=str.length();
		vector<int> vec;
		for(int i=0;i<n;i++) 
		{
			if (str[i]=='R') vec.push_back(i+1);
		}
		vec.push_back(n+1);
		int max=vec[0];
		for(int i=1;i<vec.size();i++) 
		{
			if(max<vec[i]-vec[i-1]) max=vec[i]-vec[i-1];
		}
		cout<<max<<endl;
	}
}
