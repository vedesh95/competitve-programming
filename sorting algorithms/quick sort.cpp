#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int n,int low,int high)
{
    int pivot=arr[low];
	int i=low;int j=high;
	while(i<j)
	{
		do{i++;} while(arr[i]<=pivot);
		
		do{j--;} while(arr[j]>pivot);
		if(i<j)
		{
			swap(arr[i],arr[j]);
			
		}
		
	}
	
	swap(arr[j],arr[low]);
	return j;
}

void quicksort(int arr[],int n,int low,int high)
{
	int i=low;int j=high;
	if(i<j)
	{
		int j=partition(arr,n,low,high);
		quicksort(arr,n,low,j);
		quicksort(arr,n,j+1,high);
	}
}
int main()
{
	int arr[]={22,45,0,-37,0,5576,-33,0,0,-338,36,-2,393,34,22}; //14 elements
	int n=sizeof(arr)/sizeof(arr[0]);
	quicksort(arr,n,0,n);
	
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";	
	
}
