#include<bits/stdc++.h>
using namespace std;


void perfectNumber(int n){
int num=0;
for(int i=1;i<n; i++){
    if(n%i==0){
        num+=i;
    }
}
if(num==n){
    cout<<"This Number is Perfect Number"<<endl;

}
else cout<<"This Number is not Perfect"<<endl;

}
main(){


int n;
cout<<"Enter Your Number To check Perfect Or Not "<<endl;
cin>> n;
perfectNumber(n);


return 0;
}













//Perfect Number ex: 28= 1,2,4,7,14; ---> 1+2+4+7+14=28
