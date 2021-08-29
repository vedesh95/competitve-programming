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

vector<int> Solution::searchRange(const vector<int> &arr, int k) {
    int n=arr.size();
    int l=lbs(arr,k,0,n-1);
    int r=rbs(arr,k,0,n-1);
    vector<int> v;
    v.push_back(l);v.push_back(r);
    return v;
}
