#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Graph
{
	int V;
	list<int> *adj;
	
	void DFSUtil(int v,bool visited[]);
	public:
		Graph(int V);

		void DFS(int V);
		void addEdge(int v,int w);

	
};

Graph::Graph(int V)
{
	this->V=V;
	adj=new list<int>[V];
	
}
void Graph::DFSUtil(int v,bool visited[])
{
	visited[v]=true;
	cout<<v<<" ";
	
	list<int>::iterator it;
	for(it=adj[v].begin();it!=adj[v].end();it++)
	{
		if(!visited[*it])
		{
			DFSUtil(*it,visited);
		}
	}
}

void Graph::DFS(int V)
{
	bool *visited=new bool [V];
	for(int i=0;i<V;i++)
	 {
	 	visited[i]=false;
	 }
	 DFSUtil(V,visited);
}

void Graph::addEdge(int v,int w)
{
	adj[v].push_back(w);
}
int main()
 {
 	Graph g(4);
 	g.addEdge(0, 1); 
    g.addEdge(0, 2); 
    g.addEdge(1, 2); 
    g.addEdge(2, 0); 
    g.addEdge(2, 3); 
    g.addEdge(3, 3); 
  
    cout << "Following is Depth First Traversal"
            " (starting from vertex 2) \n"; 
    g.DFS(2); 
  
    return 0;
 	
 }
