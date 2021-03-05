int Solution::reverse(int n) {
    vector<int> arr;
    bool flag=0;
    if(n<INT_MIN || n>INT_MAX) return 0;
    if(n<0) flag=1;
    n=abs(n);
    while(n){
        int rem=n%10;
        n=n/10;
        arr.push_back(rem);
    }
    int j=0;
    long long int ans=0;
    for(int i=arr.size()-1;i>=0;i--){
        ans=ans+arr[i]*pow(10,j);
        j++;
        if(ans>INT_MAX) return 0;
    }
    int anss=ans;
    if(flag) return 0-ans;
    return ans;
}
