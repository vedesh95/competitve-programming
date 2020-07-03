#include<bits/stdc++.h>
using namespace std;
int main()
{
	long n;cin>>n;
	vector<long >arr(n);
	for(long i=0;i<n;i++) 
		cin>>arr[i];
	
	vector<long > helper(n);
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=0) helper.push_back(arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]==0) 
		{
			arr[i]=helper.back();helper.pop_back();
		} 
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
