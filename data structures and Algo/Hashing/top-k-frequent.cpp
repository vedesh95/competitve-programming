// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

vector<int> TopK(vector<int>& array, int k) ;


 // } Driver Code Ends


//User function Template for C++
bool compare( vector<vector<int> >p1,vector<vector<int> >p2){
    if(p1[1]==p2[1]){
        return p1[0]>p2[0];
    }
    return p1[1]>p2[1];
}

vector<int> TopK(vector<int>& arr, int k) 
{
    
    map<int,int> mp;
    int n=arr.size();
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    vector<vector<int> > vec(mp.begin(),mp.end());
    sort(vec.begin(),vec.end(),compare);
    vector<int> ans;
    for(int i=vec.size()-1;i>=vec.size()-k;i--){
        ans.push_back(vec[i][0]);
    }
    
    return ans;
}

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,k ;
        cin>>n;
        vector <int> array(n);

        for(int i=0; i<n; i++)
            cin>>array[i];
        cin>>k;

        vector<int> result = TopK(array,k);
        
        for(int i=0; i<result.size();i++)
            cout<<result[i]<<" ";

        cout<<"\n";

    }
    return 0;
}  // } Driver Code Ends
