vector<string> Solution::fullJustify(vector<string> &arr, int l) {
    int i=0,n=arr.size();
    if(n==0) return arr;
    if(n==1 && arr[0]=="") return arr;
    vector<string> ans;
    while(i<n){
        int sum=0,j=i,cl=0,cnt=0;
        while(j<n){
            sum=sum+arr[j].length();
            if(sum<=l){
                cnt++;sum++;
                cl=cl+arr[j].length();j++;
            }else break;
        }
        // cout<<"cnt="<<cnt<<" ";
        int space,lspace=0;
        
        string temp;
        if(cnt==1){
            space=l-cl;
            lspace=0;
            // cout<<space<<" "<<lspace<<" ";
            temp.append(arr[i]);
            for(int i=0;i<space;i++) temp.push_back(' ');
        }else{
            space=(l-cl)/(cnt-1);
            lspace=(l-cl)%(cnt-1);
            int k=i;bool flag=1;
            // cout<<"sum="<<sum<<" "<<"cl="<<cl<<" "<<space<<" "<<lspace<<" ";
            while(cnt){
                temp.append(arr[k]);
                if(cnt>1 && flag && j<n){
                    for(int i=0;i<lspace;i++) temp.push_back(' ');
                    flag=0;
                }
                if(cnt>1 && j<n){
                    for(int i=0;i<space;i++) temp.push_back(' ');
                }
                else if(j==n){
                    temp.push_back(' ');
                }
                k++;cnt--;
            }
        }
        ans.push_back(temp);
        i=j;
    }
    int ts=ans.size();
    int ls=ans[ts-1].size();
    int loop=l-ls;
    while(loop--){
        ans[ts-1].push_back(' ');
    }
    
    return ans;
}
