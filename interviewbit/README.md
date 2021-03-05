## Boiler plate for lower bound and uppper bound
int lbs(const vector<int> &arr,int l,int r,int x){
    if(l>r) return -1;
    long long int mid=(l+r)/2;
    if(mid==0 && arr[mid]==x) return mid;
    if(mid>0 && arr[mid]==x && arr[mid-1]!=x) return mid;
    else if(mid>0 && arr[mid]==x && arr[mid-1]==x) return lbs(arr,l,mid-1,x);
    if(x<arr[mid]) return lbs(arr,l,mid-1,x);
    return lbs(arr,mid+1,r,x);
}
int rbs(const vector<int> &arr,int l,int r,int x){
    if(l>r) return -1;
    int n=arr.size();
    long long int mid=(l+r)/2;
    if(mid==n-1 && arr[mid]==x) return mid;
    if(mid<n-1 && arr[mid]==x && arr[mid+1]!=x) return mid;
    else if(mid<n-1 && arr[mid]==x && arr[mid+1]==x) return rbs(arr,mid+1,r,x);
    if(x<arr[mid]) return rbs(arr,l,mid-1,x);
    return rbs(arr,mid+1,r,x);
}
vector<int> Solution::searchRange(const vector<int> &A, int b) {
    int n=A.size();
    vector<int> ans;
    ans.push_back(lbs(A,0,n-1,b));
    ans.push_back(rbs(A,0,n-1,b));
    return ans;
}
