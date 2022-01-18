#include<bits/stdc++.h>
using namespace std;
int r,rev;

void palindromeChecker(int n){
    int num=n;
   while(n!=0){
     r= n%10;
    rev= rev*10+r;
    n=n/10;
   }
   if(num==rev){
    cout<< "This number is Palindrome"<<endl;
   }
   else cout<< "This number is not Palindrome"<<endl;

}


main(){

int n;
cout<<"Enter A Number to Check Palindrome Or Not: "<<endl;
cin>>n;

palindromeChecker(n);





return 0;
}
