#include<bits/stdc++.h>
using namespace std;
main(){

int m,n;
double result=1.0;


cout<< "Enter m  and n :"<< endl;
cin>>m>>n;

do {
    result *=m;
 --n;

}
while (n!=0);
    cout<<"Your Result is :"<< result;




return 0;
}
