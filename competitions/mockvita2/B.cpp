#include<bits/stdc++.h>
using namespace std;

int Digits(int n) 
{ 
    int largest = 0; 
    int smallest = 9; 
  
    while (n) { 
        int r = n % 10; 
  
        // Find the largest digit 
        largest = max(r, largest); 
  
        // Find the smallest digit 
        smallest = min(r, smallest); 
  
        n = n / 10; 
    } 
    n=largest*11 + smallest*7;
    if(n>=100) return (n-100)/10;
    else if(n>=10) return n/10;
    else return n;

} 

int main(){
	int n;cin>>n;
	vector<int> msb(n);
	for(int i=0;i<n;i++) cin>>msb[i];
	for(int i=0;i<n;i++){
		msb[i]=Digits(msb[i]);
	}

	vector<int> msbeven(10);
	vector<int> msbodd(10);
	vector<int> count(10);

	for(int i=0;i<n;i++){
		if(i%2==0){
			if(msbeven[msb[i]]==1 && count[msb[i]]<2){
				count[msb[i]]++;
			}
			else msbeven[msb[i]]=1;
		}
		else if(i%2==1){
			if(msbodd[msb[i]]==1 && count[msb[i]]<2){
				count[msb[i]]++;
			}
			else msbodd[msb[i]]=1;
		}
	}

	int ans=0;
	for(int i=0;i<10;i++){
		ans=ans+count[i];
	}
	
	cout<<ans<<endl;
 //    for(i=0;i<n;i++){
	// 	if(bride[i]=='r') r--;
	// 	else m--;

		
	// } 


 //    cout<<abs(r)+abs(m)<<endl;




}
