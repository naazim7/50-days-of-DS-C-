//write a program to calculate sum of squares of cubes of first n natural numbers.
#include<bits/stdc++.h>
using namespace std;
main(){

long long int n;
cout<<"Enter Your Number "<<endl;

cin>>n;

int sum= pow(((n*(n+1))/2),2);
cout<< "Sum is : "<<sum;


return 0;
}
