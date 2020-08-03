// { Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

class Graph
{
	int V;
	list<int> *adj;
public:
	Graph(int V)
    {
    	this->V = V;
    	adj = new list<int>[V];
    }
    void addEdge(int u, int v)
    {
    	adj[u].push_back(v);
    }
    
	
 // } Driver Code Ends


//User function Template for C++

// you are required to complete this function
// the function should return the total possible paths possible from s to d
//This function is a member of the Graph class.Expand the driver code to see other members.

void countPathsUtil(int u, int d, bool *vis,int& pathCount) 
{ 
    

    if (u == d) {
        vis[d]=0;
        pathCount++; 
        return;
        
    }
      else { 
        vis[u]=1;
        list<int>::iterator i; 
        for (i = adj[u].begin(); i != adj[u].end(); ++i) 
        if(vis[*i]) continue;
        else countPathsUtil(*i, d,vis, pathCount);
        vis[u]=0;
      } 
    return;

} 
int countPaths(int s, int d)
{
    int pathCount = 0;
    bool *vis = new bool[this->V+1];
    memset(vis,false,sizeof(vis));


    countPathsUtil(s, d, vis, pathCount); 
    return pathCount; 
}

// { Driver Code Starts.
};




int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n, e, x, y, s, d;
        cin>>n>>e;
        Graph g(n);
        while(e--){
            cin>>x>>y;
            g.addEdge(x, y);
        }
	    cin>>s>>d;
	    cout << g.countPaths(s, d) << "\n";
    }
	return 0;
}
  // } Driver Code Ends
