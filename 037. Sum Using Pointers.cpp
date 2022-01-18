#include<bits/stdc++.h>
using namespace std;

int sum (int *x,int *y){
int total= *x+*y;
return total;
}
main(){
    int a,b;
    cout<<"Enter Two Numbers to Sum:" <<endl;
    cin>>a>>b;

    cout<<"Total: "<<sum(&a,&b)<<endl;



return 0;
}
