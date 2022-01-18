#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cout<< "Enter Your Number n :"<<endl;
cin>>n;

int sum=0;
while(n!=0)
{

    sum=sum+ n*n;
    n--;
}
cout<< "Your Sum is :  " << sum;


return 0;
}
