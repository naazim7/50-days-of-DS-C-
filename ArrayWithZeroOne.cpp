#include <bits/stdc++.h>
using namespace std;

void split(int arr[],int n){

    int count0, count1;
   for(int i=0; i<n;i++){

       if(arr[i]==0){
           count0++;
       }
       else if(arr[i]==1){
           count1++;
       }
   }

   for(int i=0; i<count0; i++){
       arr[i] = 0;
   }
   for (int i = count0; i<n; i++){

       arr[i] = 1;
   }
};

void printArray(int arr[], int n){


    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main(){

   int arr[] = {0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1};
   int n = sizeof(arr) / sizeof(arr[0]);
   split(arr, n);
   printArray(arr,n);

   return 0;
}