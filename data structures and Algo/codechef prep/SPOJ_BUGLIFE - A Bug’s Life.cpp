#include <bits/stdc++.h>
using namespace std;

bool isCyclicUtil(long v,vector<long> &visited,long parent,vector<vector<long> >adj)
{ 
	visited[v]=1;
	for(long i=0;i<adj[v].size();i++)
	 {
	     if(visited[adj[v][i]]!=1) 
	        {if(isCyclicUtil(adj[v][i],visited,v,adj))
	            return 1;}
	     else if(adj[v][i]!=parent) return 1;
	     
	 }
	 return 0;
	 
} 

bool isCyclic(vector<vector<long> >adj, long n) 
{ 
 	vector<long >visited(n);
	for (long u = 0; u < n; u++) 
        {
            if (!visited[u]) // Don't recur for u if it is already visited 
            {if (isCyclicUtil(u, visited, -1,adj)) return true;}
        }
  
    return false; 
}

int main() 
{
	// your code goes here
	long tcs;cin>>tcs;
	for(long tc=0;tc<tcs;tc++)
	{
		long n;long conn;cin>>n>>conn;
	 	vector<vector<long> >adj(n);
	 	for(long i=0;i<conn;i++)
	 	{
	 		long s,d;cin>>s>>d;
	 		s--;d--;
	 		adj[s].push_back(d);
	 		adj[d].push_back(s);
	 	}  
	 	if(isCyclic(adj,n)) {cout<<"Scenario #"<<tc+1<<":"<<endl<<"Suspicious bugs found!"<<endl;}
	 	else {cout<<"Scenario #"<<tc+1<<":"<<endl<<"No suspicious bugs found!"<<endl;}
	}
}
