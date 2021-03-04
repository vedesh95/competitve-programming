int Solution::solve(vector<string> &a) {
    int n=a.size();
    double arr[3];
    arr[0]=stod(a[0]);
    arr[1]=stod(a[1]);
    arr[2]=stod(a[2]);
    for(int i=3;i<n;i++){
        double x=stod(a[i]);
        sort(arr,arr+3);
        double sum=arr[0]+arr[1]+arr[2];
        // cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" ";
        if(sum<=1){
            if(sum-arr[0]+x>1) arr[0]=x;
            else if(sum-arr[1]+x>1) arr[1]=x;
            else if(sum-arr[2]+x>1) arr[2]=x;
            else if(x>arr[0]) arr[0]=x;
        }else if(sum>=2){
            if(sum-arr[0]+x<2) arr[0]=x;
            else if(sum-arr[1]+x<2) arr[1]=x;
            else if(sum-arr[2]+x<2) arr[2]=x;
            else if(x<arr[2]) arr[2]=x;
        }
    }
    double sum=arr[0]+arr[1]+arr[2];
    if(sum>1 && sum<2) return 1;
    return 0;
}
