int Solution::searchMatrix(vector<vector<int> > &arr, int k) {
    int n=arr.size(),m=arr[0].size();
    for(int i=0;i<n;i++){
        if(arr[i][0]>k) break;
        if(arr[i][m-1]<k) continue;
        if(binary_search(arr[i].begin(),arr[i].end(),k)) return 1;
    }
    return 0;
}
