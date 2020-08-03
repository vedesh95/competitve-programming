// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int KthLargest(int arr[], int n, int k);

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];

        cout << KthLargest(arr, n, k) << endl;
    }

    return 0;
}// } Driver Code Ends

void swap(int (&a),int (&b)){
    int temp=b;
    b=a;a=temp;
}
void maxHeapify(int (&arr)[],int i,int n){
    int largest=i;
    int l=2*i+1;
    int r=2*i+2;
    if(l<n && arr[l]>arr[largest]) largest=l;
    if(r<n && arr[r]>arr[largest]) largest=r;
    if(largest!=i){
        swap(arr[i],arr[largest]);
        maxHeapify(arr,largest,n);
    }
}
void maxHeap(int (&arr)[],int size){
    int i=(size-1)/2;
    while(i>=0){
        maxHeapify(arr,i,size);i--;
    }
}

void extractmax(int (&arr)[],int (&n)){
    if(n==0) return;
    arr[0]=arr[n-1];
    maxHeapify(arr,0,n);
    n=n-1;
}
int KthLargest(int arr[], int n, int k) {
    // Your code here

    maxHeap(arr,n);
    while(k>1){
        extractmax(arr,n);
        k--;   
    }    
    
    return arr[0];
    
}
