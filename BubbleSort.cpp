
#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[],int n){
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                int tmp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=tmp;
            }
        }
    }
}

// int temp = array[i];
 //       array[i] = array[i + 1];
   //     array[i + 1] = temp;

int main(){

    int n;
     cout<<"Enter The Size of Array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Array Before Sorting"<<endl;

    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    bubbleSort(arr,n);
    cout<<"Array After Sorting"<<endl;

    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;


/*
Time Complexity	 
Best	O(n)
Worst	O(n2)
Average	O(n2)
Space Complexity	O(1)
Stability	Yes*/
}

