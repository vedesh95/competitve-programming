bool isCyclicUtil(int v,vector<int> &visited,int parent,vector<int> adj[])
{ 
	visited[v]=1;
	for(int i=0;i<adj[v].size();i++)
	 {
	     if(!visited[adj[v][i]]) 
	        if(isCyclicUtil(adj[v][i],visited,v,adj))
	            return 1;
	     else if(adj[v][i]!=parent) return 1;
	     
	 }
	 return 0;
	 
} 

bool isCyclic(vector<int> adj[], int n) 
{ 
 	vector<int >visited(n);
	for (int u = 0; u < n; u++) 
        if (!visited[u]) // Don't recur for u if it is already visited 
          if (isCyclicUtil(u, visited, -1,adj)) return true; 
  
    return false; 
}
