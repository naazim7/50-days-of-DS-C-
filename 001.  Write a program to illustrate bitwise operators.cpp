// Write a program to illustrate bitwise operators

#include<bits/stdc++.h>
using namespace std;
main(){



int a,b;



while(1)
{
    cout<< "Enter two Numbers:"<<endl;
    cin>> a>>b;

    cout<< "a & b = "<< (a&b)<<endl;
     cout<< "a | b = "<< (a|b)<<endl;
      cout<< "~a = "<< (~a)<<endl<< "`~b"<<(~b)<<endl;
       cout<< "a ^ b = "<< (a^b)<<endl;
        cout<< "a is right shifted by  b = "<< (a>>b)<<endl;
        cout<< "a is left shifted b = "<< (a<<b)<<endl;



}





}


/* & – Bitwise AND
| – Bitwise OR
~ – Bitwise NOT
^ – XOR
<< – Left Shift
>> – Right Shift
*/
