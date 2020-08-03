//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

int NumberOfPath( int, int);

// Position this line where user code will be pasted

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        cout << NumberOfPath(a,b) << endl;
    }
}

// } Driver Code Ends


//User function template in C++

int NumberOfPath(int a, int b) {
    //code here
    int arr[a][b];
    for(int i=0;i<a;i++){
        arr[i][0]=1;
    }
    for(int i=0;i<b;i++){
        arr[0][i]=1;
    }
    for(int i=1;i<a;i++){
        for(int j=1;j<b;j++){
            arr[i][j]=arr[i-1][j]+arr[i][j-1];
        }
    }
    return arr[a-1][b-1];
}
