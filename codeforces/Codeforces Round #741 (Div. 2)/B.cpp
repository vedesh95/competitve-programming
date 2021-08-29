#include<bits/stdc++.h>
using namespace std;
#define int long long int

//int ans=INT_MAX;

//bool iscomp(string s)
//{
//    
//	int n=0;
//	for(int i=0;i<s.length();i++){
//    	n=n+(s[i]-'0')*pow(10,i);
//	}
//	if (n <= 2)
//        return false;
// 
//    for (int i = 2; i <= sqrt(n); i++)
//        if (n % i == 0)
//            return true;
// 
//    return false;
//}
//
//void util(string &s,int i,string cs,string &ansstr){
//	int n=s.length();
//	int cslen=cs.length();
//	if(iscomp(cs)==true && cslen<ans){
//		ans=min(ans,cslen);
//		ansstr=cs;
////		cout<<ansstr<<" ";
//	}
//	if(i>=n) return;
//	util(s,i+1,cs,ansstr);
//	cs.push_back(s[i]);
//	util(s,i+1,cs,ansstr);
//}
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to square root of n
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}
int32_t main(){
	int tc;cin>>tc;
	while(tc--){
		int n;string s;
		cin>>n;
		cin>>s;
		bool f=0;
		for(int i=0;i<n;i++){
			int t=s[i]-'0';
			if(t==1 || isPrime(t)==false){
				cout<<1<<endl<<t<<endl;
				f=1;
				break;
			}
			for(int j=i+1;j<n;j++){
				int temp=t*10+(s[j]-'0');
				if(isPrime(temp)==false){
					cout<<2<<endl<<temp<<endl;
					f=1;
					break;
				}
			}
			if(f) break;
		}
		if(f==0){
			cout<<n<<endl<<s<<endl;
		}
		
	}
	
}
