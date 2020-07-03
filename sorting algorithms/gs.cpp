#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int tc;cin>>tc;
	while(tc--)
	{
	    int n;cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++) cin>>arr[i];
	    
	    int count=0;
	    for(int i=1;i<n;i++)
	    {
	        if(arr[i-1]%arr[i]==0) count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}

