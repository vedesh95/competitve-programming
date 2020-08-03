int maximizeTheCuts(int n, int x, int y, int z);
//https://practice.geeksforgeeks.org/problems/cutted-segments1642/1/?track=sp-dynamic-programming&batchId=152
int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        
        int x,y,z;
        cin>>x>>y>>z;
        
        cout<<maximizeTheCuts(n,x,y,z)<<endl;

    }

	return 0;
}// } Driver Code Ends


//Complete this function
int maximizeTheCuts(int n, int x, int y, int z)
{
    //Your code here
    vector<int> arr(n+1);
    if(x<=n) arr[x]=1;
    if(y<=n) arr[y]=1;
    if(z<=n) arr[z]=1;
    for(int i=0;i<n+1;i++){
        int maxa=0,maxb=0,maxc=0;
        if((i-x)>=0) maxa=max(maxa,arr[i-x]);
        if((i-y)>=0) maxb=max(maxb,arr[i-y]);
        if((i-z)>=0) maxc=max(maxc,arr[i-z]);
        if(maxa>0 || maxb>0 || maxc>0) arr[i]=max(max(max(maxa,maxb),maxc),arr[i])+1;
    }
    
    // for(int i=1;i<n+1;i++){
    //     cout<<arr[i]<<" ";
    // }
    
    return arr[n];
    
}
