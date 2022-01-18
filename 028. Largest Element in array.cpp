#include<bits/stdc++.h>
using namespace std;

void largestElement(int arr[],int sz){
int max= arr[0];

for(int i=1;i<sz;i++){
    if(arr[i]>max){
        max=arr[i];
    }
}
cout<<"Largest Value in this array is : "<<max<<endl;
}
main(){

int n;
cout<<"Enter the Size of Your Aray: "<<endl;

cin>>n;
int arr[n];

for(int i=0;i<n;i++){
    cin>>arr[i];

}
largestElement(arr,n);

return 0;
}
