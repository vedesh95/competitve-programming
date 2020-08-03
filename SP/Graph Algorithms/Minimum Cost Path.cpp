// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

int shortest(vector<vector<int> > &grid ,int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<vector<int> > grid(n);

        for (int i = 0; i < n; i++) 
        {
            grid[i].resize(n);
            for (int j = 0; j < n; j++) 
            {
                cin >> grid[i][j];
            }
        }
        
        cout << shortest(grid,n) << endl;
    }
    return 0;
}
// } Driver Code Ends


// User function template for C++

// grid : given n*n grid 
// n : size of the square grid

int shortest(vector<vector<int> > &grid, int n) {
    // Your code goes here
    int temp1[4]={-1,0,1,0};
    int temp2[4]={0,1,0,-1};

    vector<vector<int> > dest(n,vector<int>(n,INT_MAX));
    dest[0][0]=grid[0][0];
    priority_queue< pair<int,pair<int,int> >, vector<pair<int,pair<int,int> > >,greater<pair<int,pair<int,int> > > >pq;
    pq.push(make_pair(grid[0][0],make_pair(0,0)));

    while(!pq.empty()){
        pair<int,pair<int,int> > pr=pq.top();pq.pop();
        pair<int,int> p=pr.second;
        int i=p.first,j=p.second;
        for(int k=0;k<4;k++){
            int ii=i+temp1[k],jj=j+temp2[k];
            if(ii<n && ii>=0 && jj>=0 && jj<n){
                if(dest[ii][jj]>dest[i][j]+grid[ii][jj]){
                    dest[ii][jj]=dest[i][j]+grid[ii][jj];
                    pq.push(make_pair(dest[ii][jj],make_pair(ii,jj)));
                }
            }
        }
    }
    return dest[n-1][n-1];

}