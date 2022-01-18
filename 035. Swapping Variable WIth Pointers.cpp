#include<bits/stdc++.h>
using namespace std;
//Function for Swapping Two Variables using Pointers
void swapWithPointers(int *x,int *y){

int temp;
temp=*x;
*x=*y;
*y=temp;

}

main(){

int a,b;
cin>>a>>b;
cout<<"Before Swapping: " <<  a <<" "<< b<<endl;
swapWithPointers(&a,&b);
cout<<"After Swapping :"<< a <<" "<< b<<endl;
return 0;
}
