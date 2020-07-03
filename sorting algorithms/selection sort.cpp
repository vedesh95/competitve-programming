/*#include<iostream>
using namespace std;
int main()
{
	
int arr[]={2,3,4,45,6,-133,0,9,-89,-100,0,0,6563};  //13 elements 
int n=13;

for(int i=0;i<n-1;i++)
{   
	int min_index=i;
	for(int j=i+1;j<n;j++)
	{
	  	if(arr[i]>arr[j])   swap(arr[i],arr[j]); 
	  	
	  	
	
		for(int i=0;i<n;i++)
		{
		cout<<arr[i]<<" ";
	
		}
		cout<<endl;
	}	
}

	
for(int i=0;i<n;i++)
{
	cout<<arr[i]<<" ";
	
}
}

*/

#include<iostream>
using namespace std;
int main()
{
	
int arr[]={2,3,4,45,6,-133,0,9,-89,-100,0,0,6563};  //13 elements 
int n=13;

for(int i=0;i<n-1;i++)
{   
	int min_index=i;
	for(int j=i+1;j<n;j++)
	{
	  	if(arr[i]>arr[j])   swap(arr[i],arr[j]); 
	}	
}

	
for(int i=0;i<n;i++)
{
	cout<<arr[i]<<" ";
	
}
}
