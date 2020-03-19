/*This problem was asked by Snapchat.

Given a list of possibly overlapping intervals, return a new list of intervals where all overlapping intervals have been merged.

The input list is not necessarily ordered in any way.

For example, given [(1, 3), (5, 8), (4, 10), (20, 25)], you should return [(1, 3), (4, 10), (20, 25)].*/
/*https://practice.geeksforgeeks.org/problems/overlapping-intervals/0*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int tc;cin>>tc;
	while(tc--)
	{
	    int n;cin>>n;
	    vector<pair<int,int> > arr;
 		vector<pair<int,int> > ans;

	    for(int i=0;i<n;i++)
	    {
	        int a,b;
	        cin>>a>>b;
	        arr.push_back(make_pair(a,b));
	    }
        //for(int i=0;i<arr.size();i++)
	    //{
	      //  cout<<arr[i].first<<" "<<arr[i].second<<" ";
	    //}
	    sort(arr.begin(),arr.end());
	    int last=0;
	    ans.push_back(arr[0]);
	    for(int i=0;i<=arr.size()-2;i=i+1)
	    {
	        if(ans[last].second>=arr[i+1].first)
	        {
	            if(ans[last].second>=arr[i+1].second)
	            {}
	            else if(ans[last].second<=arr[i+1].second)
 	            {
	                ans[last].second=arr[i+1].second;
	            }
	           
	        }
	       else {ans.push_back(arr[i+1]);last++;}
	    }
	    for(int i=0;i<ans.size();i++)
	    {
	        cout<<ans[i].first<<" "<<ans[i].second<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
