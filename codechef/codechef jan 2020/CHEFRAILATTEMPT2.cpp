#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
using namespace std;
int main()
{
 
 int tc;cin>>tc;
 while(tc--)
  {
		float n,m;cin>>n>>m;
		vector<float> xax;
		vector<float> yax;
		
		long noofz=0;
		for(float i=0;i<n;i++)
		{
			float  num;cin>>num;
			if(num==0) noofz++;		
			else xax.push_back(num);		
		}
		for(float i=0;i<m;i++)
		{
			float  num;cin>>num;
			if(num==0) noofz++;		
			else yax.push_back(num);
		}
		
	
		sort(xax.begin(),xax.end());sort(yax.begin(),yax.end());
		float count=0;
		for(float i=0;i<xax.size();i++)
		{
			for(float j=0;j<yax.size();j++)
			
			{
				
				float secondnum=pow(yax[j],2)/xax[i];
				
				if(binary_search(xax.begin(),xax.end(),secondnum)) count++;
			}
			
		}
		
		for(float i=0;i<yax.size();i++)
		{
			for(float j=0;j<xax.size();j++)
			{
				
				float secondnum=0-pow(xax[j],2)/yax[i];
				if(binary_search(yax.begin(),yax.end(),secondnum)) count++;
			}
			
		}
		if(noofz>0)
		{
			count=count+(xax.size()*yax.size());
			
		}	
		//cout<<xn.size()<<" "<<xp.size()<<" "<<yn.size()<<" "<<yp.size()<<" "<<xax.size()<<" "<<yax.size()<<" ";
		cout<<count<<endl;
	}
}
/*#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
using namespace std;
int main()
{
 
 int tc;cin>>tc;
 while(tc--)
  {
		float n,m;cin>>n>>m;
		vector<float> xax;
		vector<float> yax;
		
		long noofz=0;
		for(float i=0;i<n;i++)
		{
			float  num;cin>>num;
			if(num==0) noofz++;		
			else xax.push_back(num);		
		}
		for(float i=0;i<m;i++)
		{
			float  num;cin>>num;
			if(num==0) noofz++;		
			else yax.push_back(num);
		}
		
	
		sort(xax.begin(),xax.end());sort(yax.begin(),yax.end());
		float count=0;
		for(float i=0;i<xax.size();i++)
		{
			for(float j=0;j<yax.size();j++)
			
			{
				float temp=pow(yax[j],2);
				if(temp%xax[i]!=0) continue;
				float secondnum=temp/xax[i];
				
				if(binary_search(xax.begin(),xax.end(),secondnum)) count++;
			}
			
		}
		
		for(float i=0;i<yax.size();i++)
		{
			for(float j=0;j<xax.size();j++)
			{
				float temp=pow(xax[j],2);
				
				if( temp%yax[i]!=0 ) continue;
				float secondnum=0-temp/yax[i];
				if(binary_search(yax.begin(),yax.end(),secondnum)) count++;
			}
			
		}
		if(noofz>0)
		{
			count=count+(xax.size()*yax.size());
			
		}	
		//cout<<xn.size()<<" "<<xp.size()<<" "<<yn.size()<<" "<<yp.size()<<" "<<xax.size()<<" "<<yax.size()<<" ";
		cout<<count<<endl;
	}
}*/
