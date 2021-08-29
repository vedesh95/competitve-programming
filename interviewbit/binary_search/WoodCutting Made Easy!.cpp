int Solution::solve(vector<int> &arr, int k) {
    sort(arr.begin(),arr.end());
    int n=arr.size();
    int j=1;
    for(int i=n-1;i>=0;i--){
        // cout<<"ayee"<<k<<" ";
        if(i>0 && (n-i)*(arr[i]-arr[i-1])<=k){
            k=k-(n-i)*(arr[i]-arr[i-1]);
            // cout<<k<<" ";
            if(k==0) return arr[i-1]; 
        }else{
            // cout<<k<<" ";
            if(k%(n-i)==0) return arr[i]-k/(n-i); 
            return arr[i]-k/(n-i)-1;
        }
        // cout<<k<<" ";
    }
    return arr[0];
}
