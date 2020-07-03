#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int tc;cin>>tc;
	long lastans=0;
	while(tc--)
	{
		int request;cin>>request;
		vector<vector<int> > arr(4,vector<int >(4,0));
		for(int l=0;l<request;l++)
		{
			char movie;cin>>movie;
			int time;cin>>time;
			int i=movie-'A';
			int j=time/3-1;
			arr[i][j]++;
		}

	
		

		int combo[]={
		0,0,1,1,2,2,3,3,
		0,0,1,1,3,2,2,3,
		0,0,1,2,2,1,3,3,
		0,0,1,2,3,1,2,3,
		0,0,1,3,2,1,3,2,
		0,0,1,3,3,1,2,2,
		
		0,1,1,0,2,2,3,3,
		0,1,1,0,3,2,2,3,
		0,1,1,2,2,0,3,3,
		0,1,1,2,3,0,2,3,
		0,1,1,3,2,0,3,2,
		0,1,1,3,2,2,3,0,
		
		0,2,1,0,2,1,3,3,
		0,2,1,0,3,1,2,3,
		0,2,1,1,2,0,3,3,
		0,2,1,1,3,0,2,3,
		0,2,1,3,2,0,3,1,
		0,2,1,3,3,0,2,1,
		
		0,3,1,0,2,1,3,2,
		0,3,1,0,3,1,2,2,
		0,3,1,1,2,0,3,2,
		0,3,1,1,3,0,2,2,
		0,3,1,2,2,0,3,1,
		0,3,1,2,3,0,2,1,
		};
		
		int j=0;long ans=INT_MIN;
		while(j<=184)
		{
			stack<int >st;st.push(25);st.push(50);st.push(75);st.push(100);
			int count=0;
			vector<int> tempvec;
			int temp=j;
			while(j<temp+7)
			{
				int iindex=combo[j],jindex=combo[j+1];
				tempvec.push_back( arr[iindex][jindex] );
				j=j+2;

			}
			
			sort(tempvec.begin(),tempvec.end(),greater<int>());
			for(int i=0;i<tempvec.size();i++)
			{
				if(tempvec[i]>0) {count=count+(tempvec[i]*(st.top()));st.pop();}
				else count=count-100;
			}
			if(ans<=count) ans=count;
		}
		cout<<ans<<endl;
		lastans=lastans+ans;
		
		
	}

	cout<<lastans<<endl;
	
	
}
/*if(arr[0][0]+arr[1][1]+arr[2][2]+arr[3][3]>max) max=arr[0][0]+arr[1][1]+arr[2][2]+arr[3][3];
		if(arr[0][0]+arr[1][1]+arr[3][2]+arr[2][3]>max) max=arr[0][0]+arr[1][1]+arr[3][2]+arr[2][3];	
		if(arr[0][0]+arr[1][2]+arr[2][1]+arr[3][3]>max) max=arr[0][0]+arr[1][2]+arr[2][1]+arr[3][3];
		if(arr[0][0]+arr[1][2]+arr[3][1]+arr[2][3]>max) max=arr[0][0]+arr[1][2]+arr[3][1]+arr[2][3];
		if(arr[0][0]+arr[1][3]+arr[2][1]+arr[3][2]>max) max=(arr[0][0]+arr[1][3]+arr[2][1]+arr[3][2]);
		if(arr[0][0]+arr[1][3]+arr[3][1]+arr[2][2]>max) max=(arr[0][0]+arr[1][3]+arr[3][1]+arr[2][2]);

		if(max<arr[0][1]+arr[1][0]+arr[2][2]+arr[3][3])	max=(arr[0][1]+arr[1][0]+arr[2][2]+arr[3][3]);
		if(max<arr[0][1]+arr[1][0]+arr[3][2]+arr[2][3]) 
		if(max<arr[0][1]+arr[1][2]+arr[2][0]+arr[3][3])	
		if(max<arr[0][1]+arr[1][2]+arr[3][0]+arr[2][3])	
		if(max<arr[0][1]+arr[1][3]+arr[2][0]+arr[3][2])	
		if(max<arr[0][1]+arr[1][3]+arr[2][2]+arr[3][0])	
		
		if(max<arr[0][2]+arr[1][0]+arr[2][1]+arr[3][3])	
		if(max<arr[0][2]+arr[1][0]+arr[3][1]+arr[2][3])	
		if(max<arr[0][2]+arr[1][1]+arr[2][0]+arr[3][3])	
		if(max<arr[0][2]+arr[1][1]+arr[3][0]+arr[2][3])	
		if(max<arr[0][2]+arr[1][3]+arr[2][0]+arr[3][1])	
		if(max<arr[0][2]+arr[1][3]+arr[3][0]+arr[2][1])	
		
		if(max<arr[0][3]+arr[1][0]+arr[2][1]+arr[3][2])	
	 	if(max<arr[0][3]+arr[1][0]+arr[3][1]+arr[2][2])
		if(max<arr[0][3]+arr[1][1]+arr[2][0]+arr[3][2])
		if(max<arr[0][3]+arr[1][1]+arr[3][0]+arr[2][2])
		if(max<arr[0][3]+arr[1][2]+arr[2][0]+arr[3][1])
		if(max<arr[0][3]+arr[1][2]+arr[3][0]+arr[2][1])	
		
			for(int i=0;i<4;i++)
		{
			for(int k=0;k<4;k++) 
			cout<<arr[i][k]<<" ";
			cout<<endl;
		}	
	*/

