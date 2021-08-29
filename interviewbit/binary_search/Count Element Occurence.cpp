int lbs(const vector<int> &arr, int k,int l,int r){
    if(l>r) return -1;
    int mid=(l+r)/2;
    if(arr[mid]==k && mid==l) return mid;
    if(arr[mid]==k && arr[mid-1]!=k) return mid;
    if(arr[mid]<k) return lbs(arr,k,mid+1,r);
    return lbs(arr,k,l,mid-1);
}
int rbs(const vector<int> &arr, int k,int l,int r){
    if(l>r) return -1;
    int mid=(l+r)/2;
    if(arr[mid]==k && mid==r) return mid;
    if(arr[mid]==k && arr[mid+1]!=k) return mid;
    if(k<arr[mid]) return rbs(arr,k,l,mid-1);
    return rbs(arr,k,mid+1,r);
}
int Solution::findCount(const vector<int> &arr, int k) {
    int n=arr.size();
    if(lbs(arr,k,0,n-1)==-1) return 0;
    return rbs(arr,k,0,n-1)-lbs(arr,k,0,n-1)+1;
}
