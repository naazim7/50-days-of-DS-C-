#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A[2][2],B[2][2],C[2][2],i,j,row=2,col=2;

    cout<<"Enter Your First 2 Dimentional Array"<<endl;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {

           cin>>A[i][j];
        }
    }
     cout<<"Enter Your Second 2 Dimentional Array"<<endl;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
           cin>>B[i][j];
        }
    }

    cout<<"Sum Of 2 Array"<<endl;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            C[i][j]=A[i][j]+B[i][j];


            cout<<"\t"<<C[i][j];
        }
      cout<<endl;
    }
    return 0;
}
