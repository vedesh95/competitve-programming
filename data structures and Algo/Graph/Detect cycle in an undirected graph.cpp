#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends

/* This function is used to detect a cycle in undirected graph
*  adj[]: array of vectors to represent graph
*  V: number of vertices
*/
bool isCyclicUtil(int v,vector<int> &visited,int parent,vector<int> adj[])
{ 
	visited[v]=1;
	for(int i=0;i<adj[v].size();i++)
	 {
	     if(visited[adj[v][i]]!=1) 
	        {if(isCyclicUtil(adj[v][i],visited,v,adj))
	            return 1;}
	     else if(adj[v][i]!=parent) return 1;
	     
	 }
	 return 0;
	 
} 

bool isCyclic(vector<int> adj[], int n) 
{ 
 	vector<int >visited(n);
	for (int u = 0; u < n; u++) 
        {
            if (!visited[u]) // Don't recur for u if it is already visited 
            {if (isCyclicUtil(u, visited, -1,adj)) return true;}
        }
  
    return false; 
}


// { Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int V, E;
        cin>>V>>E;
        
        // array of vectors to represent graph
        vector<int> adj[V];
        
        int u, v;
        for(int i=0;i<E;i++)
        {
            cin>>u>>v;
            
            // adding edge to the graph
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        cout << isCyclic(adj, V)<<endl;

    }
}
  // } Driver Code Ends