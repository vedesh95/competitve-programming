#include <bits/stdc++.h>
using namespace std;

void fill(vector<vector<int> >&arr,int sr,int sc,int cc,int nc,int r,int c)
{
	if(sr<0 || sc<0 || sr>=r || sc>=c || arr[sr][sc]!=cc) return;
	arr[sr][sc]=nc;
	fill(arr,sr-1,sc,cc,nc,r,c);
	fill(arr,sr+1,sc,cc,nc,r,c);
	fill(arr,sr,sc-1,cc,nc,r,c);
	fill(arr,sr,sc+1,cc,nc,r,c);
}
void flodfill(vector<vector<int> >&arr,int sr,int sc,int nc,int r,int c)
{
	if(arr[sr][sc]==nc) return;
	fill(arr,sr,sc,arr[sr][sc],nc,r,c); 
}

int main() {
	//code
	int tc;cin>>tc;
	while(tc--)
	{
		int r,c;cin>>r>>c;
		vector<vector<int> >arr(r,vector<int>(c,0));
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++) cin>>arr[i][j];
		}
		
		int sr,sc,nc;cin>>sr>>sc>>nc;
		flodfill(arr,sr,sc,nc,r,c);
		
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++) cout<<arr[i][j]<<" ";
		}
		cout<<endl;
		
	}
	return 0;
}
