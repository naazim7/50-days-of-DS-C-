#include<bits/stdc++.h>
using namespace std;
#define MAX_SIZE 100

void sortNumAsc(int arr[],int n)
{

    int tmp,i,j,k;
    for (i= 0; i< n; ++i)
   {
      for (k = i + 1; k < n; ++k)
      {
         if (arr[i] > arr[k])
         {
            tmp = arr[i];
            arr[i] = arr[k];
            arr[k] = tmp;
         }
      }
   }
   cout<<"Your Sorted Array Is :"<<endl;
   for(i=0;i<n;i++){
    cout<<arr[i]<<' ';
   }

}
main(){
    int arr[MAX_SIZE],n;
    cout<<"How Many Number do you want"<<endl;

    cin>>n;

    for(int m=0;m<n;m++){
        cin>>arr[m];
    }
    sortNumAsc(arr,n);



return 0;
}
