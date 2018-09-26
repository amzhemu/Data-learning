#include <iostream>
#include"slist.h"
using namespace std;
void del_6(SeqList &L)
{
    int i,j;
    for(i=0,j=1;j<L.length;j++)
       if(L.data[i]!=L.data[j])
          L.data[++i]=L.data[j];
        L.length=i+1;
}
