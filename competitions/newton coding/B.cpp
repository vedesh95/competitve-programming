#include<bits/stdc++.h>

using namespace std;
#define int long long
#define mod 1000000007

int power(int x, int y) 
{ 
    if (y == 0) 
        return 1; 
    else if (y % 2 == 0) 
        return power(x, y / 2) * power(x, y / 2); 
    else
        return x * power(x, y / 2) * power(x, y / 2); 
} 

int32_t main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    unordered_set<int> s;
    int count=power(2,100);
    for(int i=0;i<n;i++){
        if(s.find(arr[i])==s.end()){
            int temp=arr[i];
            bool flag=0;
            while(temp){
                if(s.find(temp)==s.end()) temp=temp/2;
                else {flag=1;break;}

            }
            if(flag) continue;
            count=count-2*power(2,100-log2(arr[i]))%mod;
            s.insert(arr[i]);
        }
    }

    cout<<count<<endl;
}
