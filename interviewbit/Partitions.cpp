int Solution::solve(int n, vector<int> &arr) {
    int sum=0,sum1=0,sum2=0;
    vector<int> dp(n);
    for(int i=n-1;i>=0;i--){
        sum+=arr[i];
    }
    if(sum%3!=0) return 0;
    for(int i=n-1;i>=0;i--){
        sum1+=arr[i];
        if(sum1==sum/3) dp[i]++;
        if(i<=n-2) dp[i]+=dp[i+1]; 
    }
    int count=0;
    for(int i=0;i<=n-3;i++){
        sum2+=arr[i];
        if(sum2==sum/3) count=count+dp[i+2];
    }
    return count;
}
