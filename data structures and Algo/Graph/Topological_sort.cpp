#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// The Graph structure is as folows

/*  Function which sorts the graph vertices in topological form
*   N: number of vertices
*   adj[]: input graph
*   NOTE: You must return dynamically allocated array 
*/
void dfs(vector<int> adj[],int s,vector<int >&vec,vector<int> &visited)
{
    visited[s]=1;
    for(int i=0;i<adj[s].size();i++)
    {
        if(visited[adj[s][i]]==0)
            dfs(adj,adj[s][i],vec,visited);
        
    }
    vec.push_back(s);
}
int* topoSort(int n, vector<int> adj[])
{
    // Your code here
    int * ans=new int[n];
    vector<int> vec; vector<int> visited(n);
    for(int i=0;i<n;i++)
        {
            if(adj[i].size()==0)
            {
                visited[i]=1;
                vec.push_back(i);
            }
        }
    for(int i=0;i<n;i++)
        {if(!visited[i]) dfs(adj,i,vec,visited);}
    reverse(vec.begin(),vec.end());
    for(int i=0;i<n;i++)
            {ans[i]=vec[i];}

    return ans;
    
}



// { Driver Code Starts.

/*  Function to check if elements returned by user 
*   contains the elements in topological sorted form
*   V: number of vertices
*   *res: array containing elements in topological sorted form
*   adj[]: graph input
*/
bool check(int V, int* res, vector<int> adj[]){
    bool flag =true;
    for(int i=0;i<V && flag;i++)
    {
        int n=adj[res[i]].size();
        for(auto j : adj[res[i]])
        {
            for(int k=i+1;k<V;k++)
            {
                if(res[k]==j )
                    n--;
            }
        }
        if(n!=0)
            flag =false;
    }
    if(flag==false)
        return 0;
    return 1;
}

// Driver Code
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,E;
        cin>>E>>N;
        int u,v;
        
        vector<int> adj[N];
        
        for(int i=0;i<E;i++)
        {
            cin>>u>>v;
            adj[u].push_back(v);
        }
    
        int *res = topoSort(N, adj);
        
        cout<<check(N, res, adj)<<endl;
       
    }
}
  // } Driver Code Ends