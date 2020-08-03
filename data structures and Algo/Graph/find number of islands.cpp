/ { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int findIslands(vector<int> A[], int N, int M);

int main() {

    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        vector<int> A[N];
        for (int i = 0; i < N; i++) {
            vector<int> temp(M);
            A[i] = temp;
            for (int j = 0; j < M; j++) {
                cin >> A[i][j];
            }
        }
        cout << findIslands(A, N, M) << endl;
    }
    return 0;
}// } Driver Code Ends


/*you are required to complete this method*/

/*  Function to find number of islands in the given graph
*   A[]: input array
*   N, M: Row and column of given matrix
*/
void dfs(vector<int> A[], int n, int m,vector<vector<int> >&visited,int i,int j,int temp,int &ans){
     visited[i][j]=1;
     temp++;
     if(temp>ans) ans=temp;
     int temp1[]={-1,-1,-1,0,0,0,1,1,1};
     int temp2[]={-1,0,1,-1,0,1,-1,0,1};
     for(int k=0;k<9;k++){
        if(i+temp1[k]>-1 && i+temp1[k]<n && j+temp2[k]>-1 && j+temp2[k]<m){
            if(A[i+temp1[k]][j+temp2[k]]==1){
                if(!visited[i+temp1[k]][j+temp2[k]]){
                    
                    dfs(A,n,m,visited,i+temp1[k],j+temp2[k],temp,ans);
                }
            }
            
        }
     }
    
}

int findIslands(vector<int> A[], int n, int m) {

    // Your code herev
    int count=0;
    vector<vector<int> >visited(n,vector<int> (m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(A[i][j]==1) {
                if(!visited[i][j]){
                    int temp=0;
                    dfs(A,n,m,visited,i,j,temp,count);
                }
            }
        }
    }
    
    return count;
}
