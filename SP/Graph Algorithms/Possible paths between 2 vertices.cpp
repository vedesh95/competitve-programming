// { Driver Code Starts

//Initial Template for C++
#include<bits/stdc++.h> 
using namespace std; 

class Graph 
{ 
	int V; 
	list<int> *adj; 
    void countPathsUtil(int, int, bool*, int &); 

public: 
    Graph(int V); 
	void addEdge(int u, int v); 
	int countPaths(int s, int d); 
}; 

Graph::Graph(int V) 
{ 
	this->V = V; 
	adj = new list<int>[V+1]; 
} 

void Graph::addEdge(int u, int v) 
{ 
    adj[u].push_back(v); 
} 


 // } Driver Code Ends

int Graph::countPaths(int s, int d) 
{ 
    int pathCount = 0;
    bool *vis = new bool[this->V+1];
    memset(vis,false,sizeof(vis));


    countPathsUtil(s, d, vis, pathCount); 
    return pathCount; ; 
} 
void Graph::countPathsUtil(int u, int d, bool *vis,int& pathCount) 
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

  

// { Driver Code Starts.
int main() 
{ 
	int T;
	cin>>T;
	while(T--){
	    int N, M;
	    cin>>N>>M;
	    int u, v;
	    Graph g(N);
	    while(M--){
	        cin>>u>>v;
	        g.addEdge(u, v);
	    }
	    int s, e;
	    cin>>s>>e;
	    cout << g.countPaths(s, e)<<endl; 
	}
	return 0; 
} 

  // } Driver Code Ends