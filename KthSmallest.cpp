#include <bits/stdc++.h>
using namespace std;

int kthMin(int arr[],int n,int k){
    
//using sort
//when the value is positive and distinct
//
    sort(arr,arr+n);
    for (int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }
        return arr[k - 1];
}

int main(){

    int arr[] = {7,8,3,1,34,4,44};
    int n= sizeof(arr)/sizeof(arr[0]);
   int ans= kthMin(arr, n, 2);
   cout<<"kth smallest value is " << ans << endl;
}