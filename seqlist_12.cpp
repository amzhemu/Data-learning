#include <iostream>
#include"slist.h"
using namespace std;
int maj_12(int A[],int n)
{
    int i=0,c=1;
    int m=A[0];
    for(i=1; i<n; i++)
    {
        if(A[i]==m)
            c++;
        else
        {
            if(c==0)
                m=A[i];
            else
            {
                c--;
            }
        }
    }
    if(c>0)return m;
    else return-1;
}
