#include<bits/stdc++.h>
using namespace std;


void swap(int *a,int *b) {

     int temp;
     temp = *b;
     *b = *a;
     *a = temp; 
}

void reverseArray(int a[],int start,int end){

    while(start<end){

        swap(&a[start], &a[end]);
        start++;
        end--;
    }
}
void displayArray(int arr[],int n){

    for (int i = 0; i < n;i++)
        {

            cout << arr[i] << " ";
        }
}

int main()
{

    int arr[] = {3, 45, 3, 56, 73, 23};
    int n= sizeof(arr)/sizeof(arr[0]);
    reverseArray(arr, 0, n - 1);
    displayArray(arr, n);
    return 0;
}