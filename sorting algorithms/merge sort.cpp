#include<bits/stdc++.h>
using namespace std;

int merge(int start,int middle,int end,int arr[],int n)
{
	int sizetemp1=middle-start+1;
	int sizetemp2=end-middle;
	
	
	int temp1[sizetemp1],temp2[sizetemp2];
	
	for(int i=0;i<sizetemp1;i++)
	{
		temp1[i]=arr[start+i];
	}
	for(int i=0;i<sizetemp2;i++)
	{
		temp2[i]=arr[middle+1+i];
	}
	
	int k=start;
	int i=0,j=0;
	
	while(i<sizetemp1 && j<sizetemp2)
	{
		if(temp1[i]<temp2[j]) 
		{
			arr[k]=temp1[i];i++;
		}
		
		else
		{
			arr[k]=temp2[j];j++;
			
		}
		k++;
	}
	while(i<sizetemp1)
	{
		arr[k]=temp1[i];i++;k++;
	}
	
	while(j<sizetemp2)
	{
		arr[k]=temp2[j];j++;k++;
	}
}

void mergesort(int start,int end,int arr[],int n)
{
	if(start<end)
	{
		int middle=(start+end)/2;
		mergesort(start,middle,arr,n);
		mergesort(middle+1,end,arr,n);
		merge(start,middle,end,arr,n);
	}
}
int main()
{
	int arr[]={0,-38,46,0,14,-3774,0,0,-273,37,-39,0,142,83,-293,0,383,38,0,-38};
	int n=sizeof(arr)/sizeof(arr[0]);
	mergesort(0,n-1,arr,n);
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
