#include <bits/stdc++.h>
using namespace std;

bool bellmanford(int n,vector<pair<int,int> > adj[ ])
{
    vector<int> dist(n,INT_MAX);
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<adj[j].size();k++)
            {
                pair<int,int> pp=adj[j][k];
				int destin=pp.first;
                int weight=pp.second;
                if(dist[j]!=INT_MAX && dist[destin]>dist[j]+weight)
                    dist[destin]=dist[j]+weight;
                    
            }
        }
    }
     for(int j=0;j<n;j++)
        {
            for(int k=0;k<adj[j].size();k++)
            {
                int destin=adj[j][k].first;
                int weight=adj[j][k].second;
                if(dist[destin]>dist[j]+weight)
                    return 1;
            }
        }
    return 0;
}

int main() {
	//code
	int tc;cin>>tc;
	while(tc--)
	{
	    int n,e;cin>>n>>e;
	    vector<pair<int,int> >adj[n];
	    for(int i=0;i<e;i++)
	    {
	        int s,d,w;cin>>s>>d>>w;
	        adj[s].push_back(make_pair(d,w));

	    }
	    bool ans=bellmanford(n,adj);
	    cout<<ans<<endl;
	    
	    
	}
	return 0;
}


