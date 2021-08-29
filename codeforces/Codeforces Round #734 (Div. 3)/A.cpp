#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;cin>>n;
		n++;
		int num2=n/3;
		cout<<n-2*num2-1<<" "<<num2<<endl;
	}
}
