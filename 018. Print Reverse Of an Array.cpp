#include<bits/stdc++.h>
using namespace std;
main(){

int n;
cout<<"Enter the Size of Your Aray: "<<endl;

cin>>n;
int arr[n];

for(int i=0;i<n;i++){
    cin>>arr[i];

}
cout<<"Reverse Print Of Array "<<endl;

for(int i=n-1;i>=0;i--){
    cout<<arr[i]<<" ";
}


return 0;
}
