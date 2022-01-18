#include<bits/stdc++.h>
using namespace std;
int largest(int arr[],int sz){

int *maximum=arr;
for(int i=0;i<sz;i++)
{

    if(*(arr+1)>*maximum){
      *maximum= *(arr+i);

    }
}
return *maximum;
}

main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

cout<<"Largest element in the array "<<largest(arr,n)<<endl;

return 0;
}
