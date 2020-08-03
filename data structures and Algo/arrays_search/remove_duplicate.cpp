int remove_duplicate(int arr[],int n)
{
//Your code here
    vector<int> vec;
    int count=-1;
    for(int i=0;i<n;i++){
        if(count>=0 &&  vec[count]==arr[i]) {}
        else {vec.push_back(arr[i]);count++;}
    }
    int ans[vec.size()];
    for(int i=0;i<vec.size();i++){
        ans[i]=vec[i];
    }
    arr=ans;
    
}
