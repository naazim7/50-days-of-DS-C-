#include<bits/stdc++.h>
using namespace std;

int r,result;

void armstrongNum ( int n){
int num=n;
while(n!=0){
    r= n%10;
    result+=r*r*r;
    n/=10;

}
if(num==result){
        cout<<"Whooo!! This is Armstrong  Number "<<endl;
}
else cout<< "This is Not Armstrong  Number"<<endl;

}

main(){
int n;
cout<<"Enter a Number to Check The number is Armstrong Or Not \n";
cin>>n;

armstrongNum(n);

return 0;
}
