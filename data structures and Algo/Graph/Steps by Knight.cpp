
#include <bits/stdc++.h>
using namespace std;

int minStepToReachTarget(int *, int *, int);

// Driver code to test above methods
int main() {
    // size of square board
    int t;
    cin >> t;
    while (t--) {
        int N;
        int a, b, c, d;
        cin >> N;
        cin >> a >> b;
        cin >> c >> d;
        int knightPos[] = {a, b};
        int targetPos[] = {c, d};
        cout << minStepToReachTarget(knightPos, targetPos, N) << endl;
    }
    return 0;
}
// } Driver Code Ends


// User function template for C++

// KnightPos : knight position coordinates
// targetPos : target position coordinated
// N : square matrix size
// int minStepToReachTarget(int knightPos[], int targetPos[], int N) {
//     // code here
// }
int minStepToReachTarget(int start[], int end[], int n) {
    // code here
    vector<vector<int> > visited(n,vector<int> (n,0));
    vector<vector<int> > dist(n,vector<int> (n,INT_MAX));

    int ii=start[0]-1,jj=start[1]-1;
    int ti=end[0]-1,tj=end[1]-1;
    int m=n;
  	visited[ii][jj]=0;
  	queue<pair<pair<int,int>,int > > q;

  	q.push(make_pair(make_pair(ii,jj),0));
  	while(!q.empty()){
  		pair<pair<int,int>,int>pp=q.front();q.pop();
  		int i=pp.first.first;
  		int j=pp.first.second;
  		int mind=pp.second;
  		if(i==ti && j==tj) return min(mind,pp.second);
  		if(i)
  		visited[i][j]=1;
  		if(dist[i][j]>mind){
  			dist[i][j]=mind;
  			if(i-2>=0 && j-1>=0 && j-1<m && i-2<n && visited[i-2][j-1]==0){
  				q.push(make_pair(make_pair(i-2,j-1),mind+1));
  			}
  			if(i-2>=0 && j+1>=0 && j+1<m && i-2<n && visited[i-2][j+1]==0){
  				q.push(make_pair(make_pair(i-2,j+1),mind+1));
  			}
  			if(i-1>=0 && j-2>=0 && j-2<m && i-1<n && visited[i-1][j-2]==0){
  				q.push(make_pair(make_pair(i-1,j-2),mind+1));
  			}
  			if(i-1>=0 && j+2>=0 && j+2<m && i-1<n && visited[i-1][j+2]==0){
  				q.push(make_pair(make_pair(i-1,j+2),mind+1));
  			}
  			if(i+2>=0 && j-1>=0 && j-1<m && i+2<n && visited[i+2][j-1]==0){
  				q.push(make_pair(make_pair(i+2,j-1),mind+1));
  			}
  			if(i+2>=0 && j+1>=0 && j+1<m && i+2<n && visited[i+2][j+1]==0){
  				q.push(make_pair(make_pair(i+2,j+1),mind+1));
  			}
  			if(i+1>=0 && j-2>=0 && j-2<m && i+1<n && visited[i+1][j-2]==0){
  				q.push(make_pair(make_pair(i+1,j-2),mind+1));
  			}
  			if(i+1>=0 && j+2>=0 && j+2<m && i+1<n && visited[i+1][j+2]==0){
  				q.push(make_pair(make_pair(i+1,j+2),mind+1));
  			}
 		} 
 	} 
}