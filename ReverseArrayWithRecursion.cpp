#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[],int start,int end);
void printArray(int arr[], int n);

int main(){

    int n;
    cout << "How many elements do you want in array?" << endl;
    cin >> n;
    int arr[n];
  for(int i=0;i<n;i++){


      cin>>arr[i];
  }

reverseArray(arr,0,n-1);
printArray(arr, n);
return 0;
}

void reverseArray(int arr[],int start,int end){
if(start>=end) return;
else{
int temp= arr[start];
 arr[start]=arr[end];
 arr[end]=temp;
return reverseArray(arr,start+1,end-1);

}
 


}
void printArray(int arr[], int n){
    for (int i = 0; i < n;i++){
        cout <<arr[i] << " ";
    }
}