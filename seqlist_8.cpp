#include <iostream>
#include"slist.h"
using namespace std;
typedef int DataType;
void rev_8(DataType A[],int left,int right,int arraysize)
{
    if(left>right||right>=arraysize)return;
    int mid=(right+left)/2;
    for(int i=0;i<=mid-left;i++)
    {
       int temp=A[i+left];
       A[i+left]=A[right-i];
       A[right-i]=temp;
    }
}
void exchange_8(DataType A[],int m,int n,int arraysize)
{
    rev_8(A,0,m+n-1,m+n);
    rev_8(A,0,n-1,m+n);
    rev_8(A,n,m+n-1,m+n);
}
