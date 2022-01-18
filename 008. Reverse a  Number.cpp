//Write a program to reverse the given number.

#include<bits/stdc++.h>
using namespace std;
int r,rev;
void reverseNumber(int n){
while(n!=0){
    r= n%10;
    rev= rev*10+r;
    n=n/10;
}
cout<< "Reverse is :"<<rev<<endl;
}
main(){

int n;
cout<<"Enter a Number to Reverse : "<<endl;

cin>> n;

reverseNumber(n);

return 0;
}
