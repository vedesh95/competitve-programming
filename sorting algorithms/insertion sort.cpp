//-----------------------------------INSERTION SORT---------------------------
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int arr[]={2,3,4,45,6,-133,0,9,-89,-100,0,0,6563,4444};  //13 elements 
	int n=14;
	
	for(int i=1;i<n;i++)
	{
		int val=arr[i];             // value of arr[i] willl be updated ansd we need to sort the cuurent element to left..therefore store it in val; 
		int j=i-1;
		while(j>=0 && arr[j]>val)
		{
			arr[j+1]=arr[j];
			j=j-1;            	//got yo left
		}
	arr[j+1]=val; 				//because j value was decremented
	}
	for(int i=0;i<n;i++)
{
	cout<<arr[i]<<" ";
	
}
cout<<endl;
}
