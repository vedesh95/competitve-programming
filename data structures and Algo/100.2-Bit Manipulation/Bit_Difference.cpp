#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int tc;cin>>tc;
	while(tc--)
	{
	    int a,b;cin>>a>>b;
	    int count=0;
	    while(a || b)
	    {
	        int check1=(a&1);
	        int check2=(b&1);
	        if(check1!=check2) count++;
	        
	        a=(a>>1);b=(b>>1);
	    }
	    cout<<count<<endl;
	}
	
	return 0;
}
