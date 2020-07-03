#include<bits/stdc++.h>
using namespace std;
int main()
{
 int tc;cin>>tc;
 while(tc--)
  {
		int n,m;cin>>n>>m;
		vector<int> xax;
		vector<int> yax;
		int noofz=0;
		for(int i=0;i<n;i++)
		{
			int num;cin>>num;
			if(num!=0) xax.push_back(num);
			else noofz++;
		}
		for(int i=0;i<m;i++)
		{
		    int num;cin>>num;
		    if(num!=0) yax.push_back(num);
		    else noofz++;
		}
		
		sort(xax.begin(),xax.end());sort(yax.begin(),yax.end());
		int count=0;
		for(int i=0;i<xax.size();i++)
		{
			for(int j=0;j<yax.size();j++)
			{
				if((yax[j]*yax[j])%xax[i]!=0) continue;
 				int secondnum=0-(yax[j]*yax[j])/xax[i];
				if(binary_search(xax.begin()+i+1,xax.end(),secondnum)) {count++;}
			}
		
		}

		for(int i=0;i<yax.size();i++)
		{
			for(int j=0;j<xax.size();j++)
			{
				if((xax[j]*xax[j])%yax[i]!=0) continue;
				int secondnum=0-(xax[j]*xax[j])/yax[i];
				
				if(binary_search(yax.begin()+i+1,yax.end(),secondnum)) {count++;}
			}
		
		}
		if(noofz>0)
		{
			count=count+(xax.size())*(yax.size());
			
		}	
		
		cout<<count<<endl;
	}
}
