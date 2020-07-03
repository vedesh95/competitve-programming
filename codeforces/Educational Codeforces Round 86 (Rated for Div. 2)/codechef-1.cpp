#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	int tc;cin>>tc;
	while(tc--)
	{
	    string s;
	    vector<int > vec;
	    for(int i=0;i<s.length();i++)
	    {
	        vec.push_back(s[i]-'a');
	    }
	    
	    vector<int> tempvec1;tempvec1=vec;
	    vector<int> tempvec2;tempvec2=vec;
	    int rotl=1;
	    rotate(tempvec1.begin(), tempvec1.begin()+rotl, tempvec1.end()); 
	    int rotr=1;
	    rotate(tempvec2.begin(), tempvec2.begin()+tempvec2.size()-rotr, tempvec2.end()); 
	    
	    bool flag=0;
	    if(tempvec1==tempvec2) flag=1;
	    if(flag) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	    
	    //std::rotate(vec1.begin(), vec1.begin()+rotL, vec1.end()); 
	    
	    
	}
}
