
#include<bits/stdc++.h>
using namespace std;

void dijkstra(vector<vector<int> > graph, int src, int n)
{
    // Your code here
    vector<vector<pair<int,int> > >vec(n);
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<n;j++)
    	{
    		if(graph[i][j]>0) 
    		{
    			vec[i].push_back(make_pair(j,graph[i][j]));
    			
			}
		}
	}
	vector<int> dist(n,INT_MAX);
	dist[src]=0;
	priority_queue< pair<int,int>,vector<pair<int,int> >, greater<pair<int,int> > > pq;
	pq.push(make_pair(0,src));
	while(!pq.empty())
	{
		pair<int,int> pqpair=pq.top();pq.pop();
		int num=pqpair.second;
		for(int i=0;i<vec[num].size();i++)
		{
			pair<int,int> pr=vec[num][i];
			int destin=pr.first;
			int weight=pr.second;
			if(dist[destin]>dist[num]+weight)
			{
				dist[destin]=dist[num]+weight;
				pq.push(make_pair(dist[destin],destin));
			}
			
			
		}
		
	}
	for(int i=0;i<n;i++)
	{
		cout<<dist[i]<<" ";
	}
    
}


int main()
{
    int t;
    int V;
    cin>>t;
    while(t--)
	{
        cin>>V;
        
        vector<vector<int> > g(V);
        
        for(int i = 0;i<V;i++){
            vector<int> temp(V);
            g[i] = temp;
        }
        
        for(int i=0;i<V;i++)
        {
      	    for(int j=0;j<V;j++)
      	    {
      		    cin>>g[i][j];
      	    }
        }
        
        int s;
        cin>>s;
        
        dijkstra(g, s, V);
        cout<<endl;
    }
        return 0;
}// } Driver Code Ends
/*  Function to implement Dijkstra
*   graph: vector of vectors which represents the graph
*   src: source vertex to start traversing graph with
*   V: number of vertices
*/

