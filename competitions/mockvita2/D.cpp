// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends





//User function Template for C++

int minimum_distance(int sx,int sy,int dx,int dy)
{
    // Your code here
     int a=dx-sx,b=dy-sy;
    if(a<0 || b<0) return -1;
    int arr[a+1][b+1];
    for(int i=0;i<=a;i++){
        arr[i][0]=1;
    }
    for(int i=0;i<=b;i++){
        arr[0][i]=1;
    }
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            arr[i][j]=arr[i-1][j]+arr[i][j-1];
        }
    }
    
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return arr[a][b];
}


// { Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t-->0){
       
       int sx,sy;
       cin>>sx>>sy;
       int dx,dy;
       cin>>dx>>dy;
       
       int dis = minimum_distance(sx,sy,dx,dy);
       cout<<dis<<endl;
    }
}  // } Driver Code Ends