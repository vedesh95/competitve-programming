#include<bits/stdc++.h>
using namespace std;
void haspath(vector<vector<int> > adj,int n,int &ans,int v1,int v2,vector<int >visited) 
{ 
 	visited[v1]=true;
 	if(v1==v2) ans++;
	for (int i=0;i<adj[v1].size();i++) 
        if (!visited[adj[v1][i]]) // Don't recur for u if it is already visited 
          haspath(adj,n,ans,adj[v1][i],v2,visited);
}

int main()
{
	int tc;cin>>tc;
	for(int i=0;i<tc;i++)
	{
		int n,e;cin>>n>>e;
		vector<vector<int> > adj(n);
		for(int j=0;j<e;j++)
		{
			int s,d;cin>>s>>d;
			adj[s].push_back(d);
		}
		
		int v1,v2;cin>>v1>>v2;
		int ans=0;
		vector<int >visited(n);
		haspath(adj,n,ans,v1,v2,visited);
		cout<<ans<<endl;
		
	}
	
}
