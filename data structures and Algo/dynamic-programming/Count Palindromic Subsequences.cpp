// { Driver Code Starts
// Counts Palindromic Subsequence in a given String
//https://practice.geeksforgeeks.org/problems/count-palindromic-subsequences/1/?track=sp-dynamic-programming&batchId=152
#include<iostream>
#include<cstring>
using namespace std;
 
// Function return the total palindromic subsequence
int countPS(string str);
 
// Driver program
int main()
{
   int t;
	cin>>t;
   while(t--)
	{
	string str;
cin>>str;
cout<<countPS(str)<<endl;
} 
}// } Driver Code Ends


/*You are required to complete below method */
int countPS(string str)
{
   //Your code here
   int N = str.length(); 
  
    // create a 2D array to store the count of palindromic 
    // subsequence 
    int cps[N+1][N+1]; 
    memset(cps, 0 ,sizeof(cps)); 
  
    // palindromic subsequence of length 1 
    for (int i=0; i<N; i++) 
        cps[i][i] = 1; 
  
    // check subsequence of length L is palindrome or not 
    for (int L=2; L<=N; L++) 
    { 
        for (int i=0; i<N; i++) 
        { 
            int k = L+i-1; 
            if (str[i] == str[k]) 
                cps[i][k] = cps[i][k-1] + 
                            cps[i+1][k] + 1; 
            else
                cps[i][k] = cps[i][k-1] + 
                            cps[i+1][k] - 
                            cps[i+1][k-1]; 
        } 
    } 
  
    // return total palindromic subsequence 
    return cps[0][N-1]; 
}
 
