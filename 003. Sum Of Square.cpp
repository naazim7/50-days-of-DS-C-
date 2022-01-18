/*Write a program to calculate the sum of squares of first n natural numbers using while
loop */

#include<bits/stdc++.h>
using namespace std;

void sumOfSquare(int n){
    int total=0;

for(int i =n;i>0;i--){
total+=i*i;

}
cout<<"Sum of  square of " <<n<< "Natural Number is :"<<total<<endl;
}

main(){

sumOfSquare(5);
sumOfSquare(6);
sumOfSquare(7);
return 0;
}
