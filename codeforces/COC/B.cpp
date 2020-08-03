#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		string in,out;cin>>in;cin>>out;
		char arr[n][n];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(i==j) {arr[i][j]='Y';}
				else if(arr[i][j-1]=='N') arr[i][j]='N';
				else if(out[i]=='N') arr[i][j]='N';
				else if(in[j]=='N') arr[i][j]='N';
				else if(out[j-1]=='N') arr[i][j]='N';
				else arr[i][j]='Y'; 
			}
		}
		for(int i=0;i<n;i++){
			for(int j=i;j>=0;j--){
				if(i==j) {arr[i][j]='Y';}
				else if(arr[i][j+1]=='N') arr[i][j]='N';
				else if(out[i]=='N') arr[i][j]='N';
				else if(in[j]=='N') arr[i][j]='N';
				else if(out[j+1]=='N') arr[i][j]='N';
				else arr[i][j]='Y'; 
			}
		}

		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<arr[i][j];
			}
			cout<<endl;
		}
	}
	return 0;
	    
}