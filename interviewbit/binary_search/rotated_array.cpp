int bs(const vector<int> &arr,int l,int r){
    if(l>r) return -1;
    if(arr[l]<=arr[r]) return l;
    int mid=(l+r)/2;
    if(mid==l) return mid+1;
    if(arr[mid-1]>arr[mid]) return mid; 
    if(arr[mid]<arr[r]) return bs(arr,l,mid-1);
    return bs(arr,mid+1,r);
}
int Solution::findMin(const vector<int> &arr) {
    int n=arr.size();
    int i=bs(arr,0,n-1);
    return arr[i];   
}
