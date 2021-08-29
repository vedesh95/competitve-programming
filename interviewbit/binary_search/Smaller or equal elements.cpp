int bs(vector<int> &arr, int k,int l,int r){
    if(l>r) return -1;
    int mid=(l+r)/2;
    if(mid==r) return mid;
    if(arr[mid]<=k && k<arr[mid+1]) return mid;
    if(k<arr[mid]) return bs(arr,k,l,mid-1);
    return bs(arr,k,mid+1,r);
}
int Solution::solve(vector<int> &arr, int k) {
    int n=arr.size();
    if(arr[n-1]<=k) return n;
}
