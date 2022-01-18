#include<bits/stdc++.h>
using namespace std;

//Function for Convert Upper Case to lower case and Lower case to uppercase

void convert(string s){

   for(int i=0;i<s.length();i++){

        if(s[i]>='A' && s[i]<='Z'){
            s[i]=s[i]+32;
        }
        else if(s[i]>='a' && s[i]<='z'){
            s[i]=s[i]-32;
        }
    }
cout<<s<<endl;}
main(){

    string s;
    getline(cin,s);
    convert(s);



return 0;
}
