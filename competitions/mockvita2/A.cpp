#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	string groom,bride;
	cin>>bride>>groom;
	int r=0,m=0,i;

	for(int i=0;i<n;i++){
		if(groom[i]=='r') r++;
		else m++;
	} 
	for(i=0;i<n;i++){
		if(bride[i]=='r') r--;
		else m--;

		if(r<0 || m<0) break;

	} 


    cout<<n-i<<endl;
 //    for(i=0;i<n;i++){
	// 	if(bride[i]=='r') r--;
	// 	else m--;

		
	// } 


 //    cout<<abs(r)+abs(m)<<endl;




}
