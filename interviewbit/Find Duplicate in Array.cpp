int Solution::repeatedNumber(const vector<int> &arr) {
    int n=arr.size();
    int bs=sqrt(n-1); // numbers are from 1 to n 
    vector<int> buckets(ceil(n*1.0/bs),0);
    for(int i=0;i<n;i++){
        buckets[(arr[i]-1)/bs]++;
    }
    int check=buckets.size()-1;
    for(int i=0;i<buckets.size();i++){
        if(buckets[i]>bs){
            check=i;
        }
    }
    int left=check*bs+1;
    int right=(check+1)*bs+1;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        if(arr[i]>=left && arr[i]<right){
            mp[arr[i]]++;
            if(mp[arr[i]]>1){
                return arr[i];
            }
        }
        
    }
    return -1;
}
