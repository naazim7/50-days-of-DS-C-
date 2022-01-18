#include<bits/stdc++.h>
using namespace std;

#define tableSize 5


void multTable();

int main ()
{
    int i = 1;




    /* header */
    printf("       ");
    for (i = 1; i <= tableSize; i++)
    {
        printf("  %3d  ", i);
    }
    printf("\n");

    for (i = 1; i <= (tableSize + 1); i++)
    {
        printf (" ");
    }
    printf("\n");


    multTable();
}







void multTable()
{
    int i = 1, j = 1;
    int line[50] = {0};

    for (j = 1; j <= tableSize; j++)
    {
        printf("  %3d  ", j);
        for (i = 1; i <= tableSize; i++)
        {
            line[i] = i*j;
            printf ("  %3d  ", line[i]);
        }
        printf("\n");
        for (i = 1; i <= (tableSize + 1); i++)
        {
            printf ("  ");
        }
        printf("\n");
    }

}
