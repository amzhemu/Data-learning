#include <iostream>
#include"slist.h"
using namespace std;
bool del_4(SeqList &L,ELemType s,ELemType t)
{
    int k=0;
    if(L.length==0||s>=t)return false;
    for(int i=0;i<L.length;i++)
        {
        if(L.data[i]>t||L.data[i]<s)
           {
             L.data[k]=L.data[i];
             k++;
           }
        }
    L.length=k;
    return true;
}
