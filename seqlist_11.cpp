#include <iostream>
#include"slist.h"
using namespace std;
int mid_11(int A[],int B[],int n)
{
    int s1=0,d1=n-1,m1,s2=0,d2=n-1,m2;
    while(s1!=d1||s2!=d2)
    {
        m1=(s1+d1)/2;
        m2=(s2+d2)/2;
        if(A[m1]==B[m2])
            return A[m1];
        if(A[m1]<B[m2])
            {
         if((s1+d1)%2==0)
            {
                d1=m1;
                s2=m2;
            }
            else{
                s1=m1+1;
                d2=m2;
            }
        }
        else
        {
           if((s2+d2)%2==0)
            {
                d1=m1;
                s2=m2;
            }
            else
            {
                s2=m2+1;
                d1=m1;
            }
        }
    }
    return A[s1]<B[s2]?A[s1]:B[s2];
}
