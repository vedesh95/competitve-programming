
#include <bits/stdc++.h>
using namespace std;

void print(char a,char b){
    
    int temp=a^b;
    cout<<std::hex<<temp;
}

int getint(char a){
    if((a-'0')<=9) return a-'0';
    else if(a=='A') return 10;
    else if(a=='B') return 11;
    else if(a=='C') return 12;
    else if(a=='D') return 13;
    else if(a=='E') return 14;
    else if(a=='F') return 15;
}

char getchar(int n){
    if(n==0) return '0';
    if(n==1) return '1';
    if(n==2) return '2';
    if(n==3) return '3';
    if(n==4) return '4';
    if(n==5) return '5';
    if(n==6) return '6';
    if(n==7) return '7';
    if(n==8) return '8';
    if(n==9) return '9';
    if(n==10) return 'A';
    if(n==11) return 'B';
    if(n==12) return 'C';
    if(n==13) return 'D';
    if(n==14) return 'E';
    if(n==15) return 'F';
}
int main() {
	//code
	int tc;cin>>tc;
	while(tc--){
	    string str;cin>>str;
	    cout<<str[0];
	   // std::hex;
	    for(int i=1;i<str.length()/2+1;i++){
	        int a=getint(str[i]),b=getint(str[i-1]);
	        int ans=a^b;
	       // cout<<ans;
	        cout<<getchar(ans);
	    }
	    
	    cout<<endl;
	}
	return 0;
}