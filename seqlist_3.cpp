#include <iostream>
#include"slist.h"
using namespace std;
void del_3(SeqList &L,ELemType x)
{
    int k=0;
    for(int i=0;i<L.length;i++)
        {
        if(L.data[i]!=x)
           {
             L.data[k]=L.data[i];
             k++;
           }
        }
    L.length=k;
}
