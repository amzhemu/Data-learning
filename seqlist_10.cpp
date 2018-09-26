#include <iostream>
#include"slist.h"
using namespace std;
void rev_10(int A[],int left,int right)
{
    int mid=(right+left)/2;
    for(int i=0;i<=mid-left;i++)
    {
       int temp=A[i+left];
       A[i+left]=A[right-i];
       A[right-i]=temp;
    }
}
void exchange_10(int A[],int p,int q)
{
    rev_10(A,0,q-1);
    rev_10(A,0,q-p-1);
    rev_10(A,q-p,q-1);
}
