#include <bits/stdc++.h>
#define int long long int 
using namespace std;

int32_t main() {
	//code
	int gcd,lcm;cin>>gcd>>lcm;
	int pro,sum;cin>>pro>>sum;
	int num1=(pro)/(gcd*lcm);
	int y=gcd*lcm;
	int x=sum-num1;
	int num2=(x+sqrt(x*x-4*y))/2;
	int num3=x-num2;
	int arr[3];
	arr[0]=num1;
	arr[1]=num2;
	arr[2]=num3;
	sort(arr,arr+3);
	for(int i=0;i<3;i++) cout<<arr[i]<<" ";
	cout<<endl;

}