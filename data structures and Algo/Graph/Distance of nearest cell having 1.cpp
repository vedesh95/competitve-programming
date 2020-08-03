// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

void print(vector<vector<int>> arr, int row, int col) {

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
    }
    cout << "\n";
}

vector <vector <int> > nearest(vector<vector<int>> &arr, int row, int col);
int main() {

    int tc;
    cin >> tc;
    while (tc--) {
        int row, col;
        cin >> row >> col;

        // Input matrix is represented using vectors of vectors
        vector<vector<int>> graph(row, vector<int>(col, 0));

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                cin >> graph[i][j];
            }
        }

        print (nearest(graph, row, col), row, col);
    }

    return 0;
}
// } Driver Code Ends



vector <vector <int> > nearest(vector<vector<int>> &arr, int n, int m) {

    // Your code here
    vector<vector<int> >visited(n,vector<int> (m));

    vector<vector<int> >dist(n,vector<int> (m,10000));
    queue<pair<int,int> > q;
    for(int i=0;i<n;i++){
    	for(int j=0;j<m;j++){
    		if(arr[i][j]==1){
    			visited[i][j]=1;
    			q.push(make_pair(i,j));
    			dist[i][j]=0;
    		}
    	}
    }


    while(!q.empty()){
    	pair<int,int> p=q.front();q.pop();
    	int i=p.first,j=p.second;
        int x[]={-1,0,1,0};
        int y[]={0,1,0,-1};
        for(int k=0;k<4;k++){
            if(i+x[k]>=0 && j+y[k]>=0 && i+x[k]<n && j+y[k]<m && visited[i+x[k]][j+y[k]]==0 ){
                dist[i+x[k]][j+y[k]]=min(dist[i+x[k]][j+y[k]],dist[i][j]+1);
                q.push(make_pair(i+x[k],j+y[k]));
                visited[i+x[k]][j+y[k]]=1;
            }
        }
        
    }
    return dist;
}