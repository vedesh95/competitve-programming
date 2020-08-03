

// #include<bits/stdc++.h>
// #define int long long int
// using namespace std;
// #define mod 1000000007

// int countSetBits(int num,int n)
// {
//     // Your logic here
//     n++;
//     int j=0;
//     int pow2=2;
//     int count=n/2; //countinging last bit
//     int ans=0;
//     ans=ans+count;j++;
//     while(pow2<=n){
//         int tp=n/pow2;
//         count=(tp/2)*pow2;
//         if(tp&1) count+=n%pow2;
//         pow2=(pow2*2)%mod;
//         double numm=num;
//         double jj=j;
//         double temp=pow(numm,jj);
//         int tempp=temp;
//         ans=ans+((count%mod)*(tempp%mod)%mod)%mod;
//         j++;
//         // cout<<count<<" ";
//     }
//     return ans%mod;
// }

// int32_t main()
// {
// 	 int t;
// 	 cin>>t;
// 	 while(t--) 
// 	 {
// 	       int num,n;
// 	       cin>>num>>n; //input n
	       
// 	       cout << countSetBits(num,n) << endl;
// 	  }
	 
// }


#include<bits/stdc++.h>
#define int long long int
using namespace std;
#define mod 1000000007

int countSetBits(int num,int n)
{
    // Your logic here
    n++;
    int j=0;
    int pow2=2;
    int count=n/2; //countinging last bit
    int ans=0;
    ans=ans+count;j++;
    while(pow2<=n){
        int tp=n/pow2;
        count=((tp/2)*pow2)%mod;
        if(tp&1) count+=(n%pow2)%mod;
        pow2=(pow2*2)%mod;
        double numm=num;
        double jj=j;
        double temp=pow(numm,jj);
        int tempp=temp;
        ans=(ans+(count%mod)*(tempp%mod))%mod;
        j++;
        // cout<<count<<" ";
    }
    return ans;
}

int32_t main()
{
     int t;
     cin>>t;
     while(t--) 
     {
           int num,n;
           cin>>num>>n; //input n
           
           cout << countSetBits(num,n) << endl;
      }
     
}
