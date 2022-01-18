#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
main(){
char str[MAX];

cin>>str;
char *ptr= str;
int i=0;
int space=0;

while(*ptr!= '[^\n]'){
    i++;
  ptr++;


}

cout<<i<<endl;



return 0;
}
