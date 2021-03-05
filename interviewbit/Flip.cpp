vector<int> Solution::flip(string arr) {
    int cnt0=0,cnt1=0,l=-1,r=-1;
    int ll=-1,rr=-1,maxc=0;
    int n=arr.length();
    for(int i=0;i<n;i++){
        if(arr[i]=='1'){
            cnt1++;
            if(cnt1>cnt0){
                cnt1=0;cnt0=0;l=-1;r=-1;
            }else r++;  // we have found l just increase r
        }
        if(arr[i]=='0'){
            cnt0++;
            if(l==-1){
                l=i;r=i;
            }else r++;
            if(cnt0-cnt1>maxc){
                maxc=cnt0-cnt1;
                ll=l;rr=r;
            }
        }
        // cout<<"l="<<l<<" "<<"r="<<r<<" ";
    }
    vector<int> ans;
    if(ll==-1) return ans;
    ans.push_back(ll+1);ans.push_back(rr+1);
    return ans;
}

