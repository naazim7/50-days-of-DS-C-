#include<bits/stdc++.h>
using namespace std;
void calculateBill(string s,int pc){
double total=0;
if(pc>=0 && pc<=200){
    total=total+0.50*pc;

}
else if(pc>200 && pc<=400){
    total = 100+pc*0.65;
}else if(pc>401 && pc<=600){
    total = 230+pc*0.85;
}
cout<<"You have to pay: "<<total<<" rs"<<endl;


}


main(){

string mNo;
int powerC;
cout<<"Enter Your Number"<<endl;
cin>>mNo;
cout<<"Enter the amount of Power You consumed:"<<endl;
cin>> powerC;

calculateBill(mNo,powerC);


return 0;
}
