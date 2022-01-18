#include<bits/stdc++.h>

using namespace std;

//Call By Value
int sum (int x,int y){

    int sum= x+y;
    return sum;


}

main(){
    int x,y;
    cout<<"Enter Two Number"<<endl;
    cin>>x>>y;
    int result= sum(x,y);
    cout<< result;


return 0;
}
