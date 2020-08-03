#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int tc;cin>>tc;
	while(tc--){
		vector<int> arr(10000+1,1);
	    for(int i=2;i<1000+1;i++){
	        int j=i*i;
	        while(j<10000+1){
	            if(j%i==0) {arr[j]=0;}
	            j=j+i;
	        }
	    }
	    int tc;cin>>tc;
	    while(tc--){
	    	int a;cin>>a;
	    	for(int i=2;i<=a;i++){
	    		if(arr[i]==1 && arr[a-i]==1)
	    			cout<<i<<" "<<a-i;
	    	}
	    	cout<<endl;
	     
	}
	return 0;
	    
}
string hasharr[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void util(int arr[],int n,int curr,char str[],vector<string> &ans){
    if(curr==n){
    	string tt(str);
        ans.push_back(tt);
        // cout<<tt<<" ";
        // for(int i=0;i<n;i++){cout<<str[i];}
        // cout<<endl;
        return;
    }
    string temp=hasharr[arr[curr]];
    for(int i=0;i<temp.length();i++){
        str[curr]=temp[i];
        util(arr,n,curr+1,str,ans);
    }
}
vector <string> possibleWords(int arr[],int n)
{
    //Your code here
    vector<string> ans;
    char str[n+1];
    str[n]='\0';
    util(arr,n-2,0,str,ans);
    return ans;
}

Input:
3
4
7 2 6 5
16
11
6 5 7 1 8 2 9 9 7 7 9
6
4
2 4 6 8
8

Output:
(2 2 2 2 2 2 2 2)(2 2 2 2 2 6)(2 2 2 5 5)(2 2 5 7)(2 2 6 6)(2 7 7)(5 5 6)
(1 1 1 1 1 1)(1 1 1 1 2)(1 1 2 2)(1 5)(2 2 2)(6)
(2, 2, 2, 2)(2, 2, 4)(2, 6)(4, 4)(8)

Explanation:
Testcase 3: Required sets with sum equal to B (8) are as follows:
[2, 2, 2, 2]
[2, 2, 4]
[2, 6]
[4, 4]
[8]
 
 void util(vector<int> arr,int n,int sum,int index,vector<vector<int> > &ans,vector<int> temp){
 	if(index==n) return;
 	if(sum==0) {vec.push_back(temp);return;}
 	else if(sum<0) return;
 	else{
 		temp.push_back(arr[index]);
 		util(arr,n,sum-arr[index],index,vec,temp);
 		temp.pop_back();
 		util(arr,n,sum,index+1,vec,temp);
 	}
 }

 vector<vector<int> > combinationSum(vector<int> arr, int sum) {
    // Your code here
    vector<int>temp;
    vector<vector<int> > ans;
    int index=0;
    set<int> s;
    for(int i=0;i<n;i++) s.insert(arr[i]);
    arr.clear();
	for(auto i:s){
		arr.push_back(i);
	}
	int n=arr.size();

    util(arr,n,sum,index,&ans,temp);
    return ans;
}

Sort the array(non-decreasing).
First remove all the duplicates from array.
Then use recursion and backtracking to solve the problem.
If:
    at any time subproblem sum==0 then add that array to the result(vector of vectors).
else if:
    sum if negative then ignore that subproblem.
else:
    insert the present array in that index to the current vector and call the function with sum=sum-A[index] and index=index,
    then pop that element from current index (backtrack) and call the function with sum=sum and index=index+1,



    A value of cell 1 means Source.
    A value of cell 2 means Destination.
    A value of cell 3 means Blank cell.
    A value of cell 0 means Wall.

bool util(vector<vector<int> >arr,vector<vector<int> >&visited,int i,int j){
	
	if(visited[i][j]==1) return 0;
	if(arr[i][j]==0) return 0;
	if(arr[i][j]==2) return 1;
	visited[i][j]=1;
	return util(visited,arr,i-1,j) || util(visited,arr,i,j+1) || util(visited,arr,i+1,j) || util(visited,arr,i,j-1);

} 
bool is_possible(vector <vector <int>> &arr, int n) {
	vector<vector<int> >visited(n,vector<int> (n,0));
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(arr[i][j]==1) return util(arr,visited,i,j);
		}
	}
	return 0;
}

void bfs(int s, vector<int> adj[], bool vis[], int N)
{
    // Your code 0
    queue<pair<int,int> > q;
    q.push(make_pair(s);
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
 void util(vector<vector<int> arr,int n,int m,vector<vector<int>  >&dist,int i,int j){
  	vector<vector<int> > visited(n,vector<int> (m,0));
  	queue<pair<pair<int,int> > q;
  	q.push(make_pair(make_pair(i,j),0));
  	while(!q.empty()){
  		pair<pair<int,int> >pp=q.front();q.pop();
  		int i=pp.first.first;
  		int j=pp.first.second;
  		int mind=pp.second;
  		if(dist[i][j]>mind){
  			dist[i][j]=mind;
  			if(i-1>=0 && j>=0 && j<m && i-1<n && visited[i-1,j]==0){
  				q.push(make_pair(make_pair(i-1,j),mind+1));
  			}
  			if(i>=0 && j+1>=0 && j+1<m && i<n && visited[i,j+1]==0){
  				q.push(make_pair(make_pair(i,j+1),mind+1));
  			}
  			if(i+1>=0 && j>=0 && j<m && i+1<n && visited[i+1,j]==0){
  				q.push(make_pair(make_pair(i+1,j),mind+1));
  			}
  			if(i>=0 && j-1>=0 && j-1<m && i<n && visited[i,j-1]==0){
  				q.push(make_pair(make_pair(i,j-1),mind+1));
  			}
 		} 
 	} 
 }   
 vector <vector <int> > nearest(vector<vector<int>> mat, int N, int M) {

    // Your code here
    vector<vector<int> >dist(n,vector<int> (m,INT_MAX));


    for(int i=0;i<n;i++){
    	for(int j=0;j<m;j++){
    		if(arr[i][j]==1){
    			util(arr,n,m,dist,i,j);
    		}
    	}
    }

    return dist;
}

// (x-2, y-1)
// (x-2, y+1)
// (x-1, y-2)
// (x-1, y+2)
// (x+2, y-1)
(x+2, y+1)
(x+1, y-2)
(x+1, y+2) 


int minStepToReachTarget(int start[], int end[], int n) {
    // code here
    vector<vector<int> > visited(n,vector<int> (n,0));
    vector<vector<int> > dist(n,vector<int> (n,INT_MAX));

    int ii=start[0]-1,jj=start[1]-1;
    int ti=end[0]-1,tj=end[1]-1;

  	visited[ii][jj]=0;
  	queue<pair<pair<int,int>,int > > q;

  	q.push(make_pair(make_pair(ii,jj),0));
  	while(!q.empty()){
  		pair<pair<int,int>,int>pp=q.front();q.pop();
  		int i=pp.first.first;
  		int j=pp.first.second;
  		int mind=pp.second;
  		if(i==tx && j==tj) return min(mind,pp.second);
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


#include <bits/stdc++.h>

using namespace std;

void util(vector<vector<int> >arr,int n,int m,vector<vector<int> > &dist,int i,int j,vector<vector<int> >&visited){
  	queue<pair<pair<int,int>,int > > q;
  	q.push(make_pair(make_pair(i,j),0));
  	while(!q.empty()){
  		pair<pair<int,int>,int>pp=q.front();q.pop();
  		int i=pp.first.first;
  		int j=pp.first.second;
  		int mind=pp.second;
  		visited[i][j]=1;
  		if(dist[i][j]>mind){
  			dist[i][j]=mind;
  			if(i-1>=0 && j>=0 && j<m && i-1<n && visited[i-1][j]==0 && arr[i-1][j]!=1){
  				q.push(make_pair(make_pair(i-1,j),mind+1));
  			}
  			if(i>=0 && j+1>=0 && j+1<m && i<n && visited[i][j+1]==0 && arr[i][j+1]!=1){
  				q.push(make_pair(make_pair(i,j+1),mind+1));
  			}
  			if(i+1>=0 && j>=0 && j<m && i+1<n && visited[i+1][j]==0 && arr[i+1][j]!=1){
  				q.push(make_pair(make_pair(i+1,j),mind+1));
  			}
  			if(i>=0 && j-1>=0 && j-1<m && i<n && visited[i][j-1]==0 && arr[i][j-1]!=1){
  				q.push(make_pair(make_pair(i,j-1),mind+1));
  			}
 		} 
 	} 
 }   
void nearest(vector<vector<int>> &arr, int n, int m) {

    // Your code here

    vector<vector<int> >dist(n,vector<int> (m,10000));
  	vector<vector<int> > visited(n,vector<int> (m,0));


    for(int i=0;i<n;i++){
    	for(int j=0;j<m;j++){
    		if(arr[i][j]==1){
    			util(arr,n,m,dist,i,j,visited);
    		}
    	}
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            arr[i][j]=dist[i][j];
        }
    }
}


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

        nearest(graph,row,col);
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cout<<graph[i][j]<<" ";
            }
        }
    cout<<endl;
        
    }

    return 0;
}
void util(vector<vector<int> >arr,int curr,int d,int &count,vector<int> &visited){
	if(curr==d) {count++;return;}
	if(visited[curr]==1) return;
	visited[curr]=1;
	for(int i=0;i<arr[curr].size();i++){
		util(arr,arr[curr][i],d,count,visited);
	}
	visited[curr]=0;

}
int Graph::countPaths(int s, int d) 
{ 
	// Your code here
	vector<vector<int> >arr;

	for(int i=1;i<=this->V;i++){
		for(int j=0;j<adj[i].size();j++){
			arr[i].push_back(adj[i][j]);
		}
	} 
	vector<int> visited[this->V+1];
	for(int i=0;i<arr[s].size();i++){
		util(arr,arr[s][i],d,count);
	}
} 