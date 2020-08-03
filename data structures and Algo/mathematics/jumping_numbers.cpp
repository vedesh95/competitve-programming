#include <bits/stdc++.h>
#define int long long
using namespace std;
void bfs(int x,int i){
    queue<int> q;
    q.push(i);
    while(!q.empty()){
    	i=q.front();
        cout<<i<<" ";
        int ld=i%10;
        if(ld==0){
        	q.push(i*10+ld+1);
        }
        else if(ld==9){
        	q.push(i*10+ld-1);

        }
        else{
        	q.push(i*10+ld-1);
        	q.push(i*10+1d+1);

        }
        
    }
    
}
int32_t main() {
	//code
	int tc;cin>>tc;
	while(tc--){
	    int x;cin>>x;
	    cout<<0<<" ";
	    for(int i=1;i<=9 && i<=x;i++){
	        bfs(x,i);
	    }
	    cout<<endl;
	}
	
	return 0;
}