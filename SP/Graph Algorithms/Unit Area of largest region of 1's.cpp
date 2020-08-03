// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

#define SIZE 100


 // } Driver Code Ends


/*  Function to find the area of 1s
*   SIZE: declared globally for matrix definition
*   n, m: row and column of matrix
*   A[][]: 2D matrix from input
*/

void dfs(int A[SIZE][SIZE], int n, int m,vector<vector<int> >&visited,int i,int j,int &temp){
     visited[i][j]=1;
     
     int temp1[]={-1,-1,-1,0,0,0,1,1,1};
     int temp2[]={-1,0,1,-1,0,1,-1,0,1};
     for(int k=0;k<9;k++){
        if(i+temp1[k]>-1 && i+temp1[k]<n && j+temp2[k]>-1 && j+temp2[k]<m){
            if(A[i+temp1[k]][j+temp2[k]]==1){
                if(!visited[i+temp1[k]][j+temp2[k]]){
                    temp++;
                    dfs(A,n,m,visited,i+temp1[k],j+temp2[k],temp);
                }
            }
            
        }
     }
    
}


int findMaxArea(int n, int m, int A[SIZE][SIZE] )
{
    // Your code here
    int count=1;
    vector<vector<int> >visited(n,vector<int> (m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(A[i][j]==1) {
                if(!visited[i][j]){
                    int temp=1;
                
                    dfs(A,n,m,visited,i,j,temp);
                    count=max(temp,count);
                }
            }
        }
    }
    
    return count;
}

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int g[SIZE][SIZE];

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> g[i][j];

        cout << findMaxArea(n, m, g) << endl;
    }

    return 0;
}  // } Driver Code Ends