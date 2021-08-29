int rbs(vector<int> arr,int k,int l,int r){
    if(l>r) return -1;
    int  mid=(l+r)/2;
    if(arr[mid]==k) return mid;
    if(k>arr[mid]) return rbs(arr,k,l,mid-1);
    return rbs(arr,k,mid+1,r);
}
int lbs(vector<int> arr,int k,int l,int r){
    if(l>r) return -1;
    int  mid=(l+r)/2;
    if(arr[mid]==k) return mid;
    if(k<arr[mid]) return lbs(arr,k,l,mid-1);
    return lbs(arr,k,mid+1,r);
}
int bs(vector<int> arr,int k,int l,int r){
    if(l>r) return -1;
    int  mid=(l+r)/2;
    if(mid-1>=l && arr[mid-1]<arr[mid]) return mid;
    if(arr[mid]<arr[r]) return bs(arr,k,mid+1,r);
    return bs(arr,k,l,mid-1);
}
int Solution::solve(vector<int> &arr, int k) {
    int n=arr.size();
    int i=bs(arr,k,0,n-1);
    if(i==-1) return rbs(arr,k,0,n-1);
    int ind=lbs(arr,k,0,i);
    if(ind!=-1) return ind;
    ind=rbs(arr,k,i,n-1);
    if(ind!=-1) return ind;
}
