// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to return string after removing consecutive duplicates

// Function to remove pair of characters
// string removePair(string str){
//     // Your code here
//     stack<char> s;stack<char> stemp;
//     for(int i=0;i<str.length();i++){
//         s.push(str[i]);
//     }
//     while(!s.empty()){
//         char ch=s.top();s.pop();
//         if(!s.empty() && s.top()==ch){
//             s.pop();
//         }
//         else stemp.push(ch);
//     }
//     string ans;
//     while(!stemp.empty()){
//         ans.push_back(stemp.top());stemp.pop();
//     }
    
//     // ans.reverse();
//     if(ans.length()>0) reverse(ans.begin(),ans.end());
//     return ans;
// }

string removePair(string str){
    // Your code here
    stack<char> sta;
    for(int i=0;i<str.length();i++){
        if(sta.empty()) {sta.push(str[i]);continue;}
        if(!sta.empty()){
            if(sta.top()==str[i]) {sta.pop();continue;}
            else {sta.push(str[i]);}
        }
    }
    string ans;
    while(!sta.empty()){
        ans.push_back(sta.top());sta.pop();
    }
    
    reverse(ans.begin(),ans.end());
    return ans;
    
}

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        string s;
        cin>>s;
        
        string ans = removePair (s);
        
        if(ans=="")
            cout<<"Empty String"<<endl;
        else
            cout<<ans<<endl;
    }
    
	return 0;
}  // } Driver Code Ends