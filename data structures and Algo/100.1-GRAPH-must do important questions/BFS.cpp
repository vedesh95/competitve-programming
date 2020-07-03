#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<queue>
using namespace std;

class Graph
{
	int V;
	list<int> *adj;
	public:
		Graph(int V);
		void addEdge(int a,int b);
		void BFS(int s);
	
};

Graph::Graph(int V)
{
	this->V=V;
	adj=new list<int>[V];
	
	
}
void Graph::addEdge(int a,int b)
{
	adj[a].push_back(b);
	
}
void Graph::BFS(int s)
{
	bool *visited=new bool[V];
	
	for(int i=0;i<V;i++)
	 {
	 	visited[i]=false;
	 }
	 
	 visited[s]=true;
	 
	 list<int> container;
	 container.push_back(s);
	 
	 list<int>::iterator it;
	 while(!container.empty())
	{
	 int num=container.front();
	 cout<<num<<" ";
     container.pop_front();	 
	 
	 
	 for(it=adj[num].begin();it!=adj[num].end();++it)
	 {
	 	if(!visited[*it])
	 	 {
	 	 	visited[*it]=true;
	 	 	container.push_back(*it);
		 }
	 }
   }
   
}
int main() 
{ 
    // Create a graph given in the above diagram 

    // Create a graph given in the above diagram 
    Graph g(20); 
    g.addEdge(10, 11); 
    g.addEdge(10, 12); 
    g.addEdge(11, 12); 
    g.addEdge(12, 10); 
    g.addEdge(12, 13); 
    g.addEdge(13, 13); 
  
    cout << "Following is Breadth First Traversal "
         << "(starting from vertex 12) \n"; 
    g.BFS(12); 
  
    return 0; 

}


