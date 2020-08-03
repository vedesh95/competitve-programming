#include<bits/stdc++.h>
#define int long long
using namespace std;

int util(int a,int b){
	if(b>a){
		int temp=a;a=b;b=temp;
	}

	int count=0;
	while(a>0 && b>0){
		int ma=max(a-b,b);
		int mb=min(a-b,b);
		a=ma;b=mb;
		count++;
	}
	return count;
}

int32_t main(){
	int maxa,mina,maxb,minb;
	cin>>mina>>maxa>>minb>>maxb;

	int count=0;

	for(int i=maxa;i>=mina;i--){
		for(int j=maxb;j>=minb;j--){
			count=count+util(i,j);
			// cout<<util(i,j)<< " ";
		}
	}

	cout<<count<<endl;
}

