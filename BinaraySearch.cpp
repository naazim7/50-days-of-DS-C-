
#include <bits/stdc++.h>
using namespace std;

int binaryS(int arr[],int n,int h,int l,int x){
     
     while(l<=h){
       int m=l+(h-l)/2;
        
       if(arr[m]==x){
          return m;
            
        }
        if(arr[m]<x){
            l=m+1;
            
            
        }
        else{
            h=m-1;
            
        }
      
        
      
    }
      return -1;
}

int main() {
    int n;
    cout<<"Enter The Size of Array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int l=0;
    int h=n-1;
    
    
    cout<<"Enter The Number You searched for"<<endl;
    
    int x;
    cin>>x;
   
   int f= binaryS(arr,n,h,l,x);
   if(f==-1){
      cout<<"NOT FOUND"<<endl;       
   }
   else{
       cout<<"Found at index "<<f<<endl;
   }
    

    return 0;
}
/*
Time Complexities

Best case complexity: O(1)
Average case complexity: O(log n)
Worst case complexity: O(log n)
Space Complexity

The space complexity of the binary search is O(1).
*/
