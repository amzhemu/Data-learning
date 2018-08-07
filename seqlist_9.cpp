#include <iostream>
#include"slist.h"
using namespace std;
void mat_9(SeqList &L,ELemType x)
{
    int low=0,high=L.length-1,mid=0;
    while(low<=high)
    {
     mid=(low+high)/2;
     if(L.data[mid]>x)high=mid-1;
     if(L.data[mid]<x)low=mid+1;
     if(L.data[mid]==x) break;
    }
    if(L.data[mid]==x)
        {
         ELemType t=L.data[mid];
         L.data[mid]=L.data[mid+1];
         L.data[mid+1]=t;
        }
    if(low>high)
     {
       int i=0;
       for(i=L.length-1;i>high;i--)
            L.data[i+1]=L.data[i];
            L.data[i+1]=x;
            L.length++;
     }
}
