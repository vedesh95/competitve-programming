//--------------------------------------------------------bubble sort----------------------------------------------------
#include<bits/stdc++.h>
using namespace std;

swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
int arr[]={2,3,4,45,6,-133,0,9,-89,-100,0,0,6563};  //13 elements 
int n=13;

for(int i=0;i<n;i++)
{
	for(int j=0;j<n-i-1;j++)
	{
	  	if(arr[j]>arr[j+1]) swap(&arr[j],&arr[j+1]);
	}	
}
	
for(int i=0;i<n;i++)
{
	cout<<arr[i]<<" ";
	
}
	cout<<endl;
	return 0;

}

