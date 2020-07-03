#include<bits/stdc++.h>
using namespace std;

long long getccode(long long cen)
{
	if(cen%4==1) return 4;
	else if(cen%4==2) return 2;
	else if(cen%4==3) return 0;
	return 6;
	
}
bool getleapyear(long long year)
{
	if(year%400==0) return 1;
	if(year%100==0) return 0;
	if(year%4==0) return 1;
	return 0;
	
}
int main()
{
	int tc;cin>>tc;
	while(tc--)
	{
	
		long long sm;long long syear;long em;long eyear;
	//	cin>>sm;cin>>syear;cin>>em;cin>>eyear;
		sm=1;cin>>syear;em=12;cin>>eyear;
		if(sm>2) syear++;
		if(em==1) eyear--;
		long long count=0;
		
		vector<int> vec;
		
		for(int i=syear;i<=eyear;i++)
		{
			long long year=i%100;
			long long cen=i/100;
			long long st=year/4;
			st=st+1+4;
			bool leapy=getleapyear(i);
			if(leapy) st=st-1;
			long long ccode=getccode(cen);
			st=st+ccode+year;
			int remain=st%7;
			if(remain==1 && leapy!=1) {count++;/*vec.push_back(i);*/cout<<i<<","; } 
			else if(remain==0) {count++;/*vec.push_back(i);*/cout<<i<<","; } 
			
		}
		cout<<endl;
		cout<<count<<endl;
	//	for(int i=vec.size()-1;i>=1;i--)
	//	cout<<vec[i]-vec[i-1]<<",";
	}

}
/*
300
801
*/


