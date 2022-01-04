#include <bits/stdc++.h>
using namespace std;

struct MinMax{

    int max;
    int min;
};

MinMax getMinMax(int arr[],int n){

 struct MinMax maxmin;
    int i;
    if(n==0){

        maxmin.max=arr[0];
        maxmin.min=arr[1];
        return maxmin;

    }
    else {
        arr[0] = maxmin.max;
        arr[1] = maxmin.min;

    }

    for (i = 2;i<n;i++){

        if(arr[i]>maxmin.max){
            maxmin.max=arr[i];
    }
    else if(arr[i]<maxmin.min){
        maxmin.min=arr[i];
    }
   
}
 return maxmin;
}

int main()
{
    int arr[100];

    cout << "Enter 10 Element into array" << endl;

  
for(int i=0;i<10;i++){
     cin >> arr[i];
 }

 struct MinMax maxmin= getMinMax(arr,10);
 cout << "Maximum Value of This array: " << maxmin.max << endl;
 cout<< "Minimum Value of This array: " << maxmin.min << endl;


 return 0;
}