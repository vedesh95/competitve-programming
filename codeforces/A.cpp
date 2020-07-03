#include<iostream>
using namespace std;
int main()
{
	int tc;cin>>tc;
	while(tc--)
	{
		int a,b;cin>>a>>b;
		if(a==b) cout<<"0"<<endl;
		else if(b>a)
		{
			if((b-a)%2==0) cout<<"2"<<endl;
			else if((b-a)%2!=0) cout<<"1"<<endl; 		
		}
		else{
			if((b-a)%2==0) cout<<"1"<<endl;
			if((b-a)%2!=0) cout<<"2"<<endl;
		}
	}
}
