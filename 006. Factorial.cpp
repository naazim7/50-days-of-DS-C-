//Write a program to calculate the factorial of a given number.

#include<bits/stdc++.h>
using namespace std;
main(){

int n,fact=1;
cout<<"Enter Your Number :"<<endl;

cin>>n;

for(int i=n;i>0;i--){


    fact*=i;
}
cout<< "Factorial of "<< n << " is = "<< fact<<endl;


return 0;
}
