// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*This is a function problem.You only need to complete the function given below*/
/*  Function to check if the given graph contains cycle
*   V: number of vertices
*   adj[]: representation of graph
*/
bool dfs(int v,vector<int>& visited,vector<int>& recs,vector<int> adj[])
{
	visited[v]=1;
	recs[v]=1;
	
	for(int i=0;i<adj[v].size();i++)
	{
		if(visited[adj[v][i]]!=1)
			{
			if(dfs(adj[v][i],visited,recs,adj))
			return true;
			}
		if(recs[adj[v][i]])
			return true;
		
	}
	
	recs[v]=0;
	return 0;
}
bool isCyclic(int n, vector<int> adj[])
{
    // Your code here
    vector<int > visited(n);
    vector<int > recs(n);
    for(int i=0;i<n;i++)
    {
    	if(visited[i]!=1)
    		if(dfs(i,visited,recs,adj))
    			return 1;
	}
	return false;
    
}

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int v, e;
	    cin >> v >> e;
	    
	    vector<int> adj[v];
	    
	    for(int i =0;i<e;i++){
	        int u, v;
	        cin >> u >> v;
	        adj[u].push_back(v);
	    }
	    
	    cout << isCyclic(v, adj) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends
