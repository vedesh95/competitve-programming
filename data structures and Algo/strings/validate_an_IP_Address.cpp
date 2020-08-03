// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int isValid(char *);
int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        char s[10000];
        cin >> s;
        cout << isValid(s) << endl;
    }
    return 0;
}// } Driver Code Ends


/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
int isValid(char *ip) {
    // your code here
    int i=0,dotcount=0,tem=0;
    while(ip[i]!='\n'){
        if(i==0 && ip[i]=='0') return 0;
        if(ip[i]=='.' && ip[i+1]==='0') return -1;
        else if(ip[i]=='.') {dotcount++;temp=0;}
        else temp++;
        if(temp>4) return 0;
    }
    return 1;
}
