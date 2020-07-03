#include<bits/stdc++.h>
using namespace std;
int main()
{



	
	int n;cin>>n;
	//priority_queue<int,vector<int>,greater<int> > pq;
	priority_queue<int,vector<int>,greater<int> > pq;
	vector<int> vec;
	for(int i=0;i<n;i++)
	{
		int num;cin>>num;
		pq.push(num);
	}
	 
	 while(!pq.empty())
	 {
	 	int num=pq.top();pq.pop();
	 	//cout<<num<<" ";
	 	if(!pq.empty() && pq.top()==num) 
	 	{
	 		pq.pop();pq.push(num+1);cout<<num<<" ";
		}
		else {vec.push_back(num);}
		
		
	 }
	 cout<<endl;
	 for(int i=0;i<vec.size();i++) cout<<vec[i]<<" ";
	 cout<<endl;
	 cout<<vec.size()<<endl;
}
