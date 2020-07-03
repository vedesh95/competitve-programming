using namespace std;

/*This is a function problem.You only need to complete the function given below*/
/* You have to complete this function*/
/* Function to do BFS of graph
*  adj[]: array of vectors
*  vis[]: array to keep track of visited nodes
*/
void bfs(int s, vector<int> adj[], bool vis[], int N)
{
    // Your code 0
    queue<int> q;
    q.push(s);
    while(!q.empty())
    {
        int v=q.front();q.pop();
        cout<<v<<" ";vis[v]=1;
        
        for(int i=0;i<adj[v].size();i++)
        {
            if(vis[adj[v][i]]!=1)
            {
                vis[adj[v][i]]=1;
                q.push(adj[v][i]);
            }
        }
    }
    
    
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        
        int N, E;
        cin>>N>>E;
        vector<int> adj[N];
        bool vis[N] = {false};
        for(int i=0;i<E;i++)
        {
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
        }
        
        bfs(0, adj, vis, N);

        cout<<endl;

    }
}
