#include<bits/stdc++.h>
using namespace std;
int main()
{
	int tc;cin>>tc;
	while(tc--)
	{
		int n;cin>>n;
		vector<int> arr(n);
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		bool flag=0;
		for(int i=0;i<n-2;i++)
		{
			for(int j =i+2;j<n;j++)
			{
				if(arr[i]==arr[j]) flag=1;
			}
			
	 	}
		if(flag==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
