// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
vector<vector<string> > Anagrams(vector<string>& string_list) ;


vector<vector<string> > Anagrams(vector<string>oriarr) 
{
// Your Code Here
    
    vector<string> arr=oriarr;
    
//    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        string str=arr[i];
        sort(str.begin(),str.end());
        arr[i]=str;
    }
    map<string,vector<string> >mp;
    for(int i=0;i<arr.size();i++){
        mp[arr[i]].push_back(oriarr[i]);
    }
    
    vector<vector<string> > ans;
    for(auto i:mp){
        ans.push_back(i.second);
    }
    return ans;
    
    
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        vector<vector<string> > result = Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}
  
