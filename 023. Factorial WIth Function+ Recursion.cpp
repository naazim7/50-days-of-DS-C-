#include<bits/stdc++.h>
using namespace std;


int  factorial (int n){

if(n>0){

    return n*factorial(n-1);

}
else {
 return 1;
}



}

main(){

     int n;


cout<<"Enter Your Number"<<endl;
cin>> n;

     int result=factorial(n);
cout<<"Factorial Of "<<n<<" is"<<result;


return 0;
}
