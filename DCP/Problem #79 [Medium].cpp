Given an array of integers, write a function to determine whether the array could become non-decreasing by modifying at most 1 element.

For example, given the array [10, 5, 7], you should return true, since we can modify the 10 into a 1 to make the array non-decreasing.

Given the array [10, 5, 1], you should return false, since we can't modify any one element to get a non-decreasing array.

SOLUTION:
Pseudocode:
int arr[n];
for(int i=0;i<n;i++)
{
  if(arr[i]>arr[i+1] && count==0)
  {
    arr[i]=arr[i]+1;
    count++;
  }
  if(count>0)
  {cout<<"NO"<<endl;}
}
