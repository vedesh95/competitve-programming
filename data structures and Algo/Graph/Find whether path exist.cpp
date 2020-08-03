#include<bits/stdc++.h>
using namespace std;

bool util(vector<vector<int> >&visited,vector<vector<int> >arr,int i,int j,int n){

  if(i<0 || j<0 || i>=n || j>=n ) return 0;
  if(visited[i][j]==1 || arr[i][j]==0) return 0;
  if(arr[i][j]==2) return 1;
  visited[i][j]=1;
  return util(visited,arr,i-1,j,n) ||  util(visited,arr,i+1,j,n) ||  util(visited,arr,i,j-1,n)||  util(visited,arr,i,j+1,n);
} 
bool is_possible(vector <vector <int>> arr, int n) {
	vector<vector<int> >visited(n,vector<int> (n,0));
	bool flag=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(arr[i][j]==1) {flag=util(visited,arr,i,j,n);break;}
		}
	}
	return flag;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<vector<int>> a(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++) cin >> a[i][j];

        cout << is_possible(a, n) << endl;
    }
    return 0;
}

