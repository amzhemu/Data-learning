#include <iostream>
#include"slist.h"
using namespace std;
void mer_7(SeqList La,SeqList Lb,SeqList &Lc)
{
    InitList(Lc);
    int i=1,j=1,k=0;
    int  lal=Length(La);
    int  lbl=Length(Lb);
    ELemType ai=0;
    ELemType bi=0;
    while(i<lal&&j<lbl)
    {
        GetElem(La,i,ai);
        GetElem(Lb,j,bi);
        if(ai<bi)
        {
            ListInsert(Lc,ai,++k);
            ++i;
        }
        else
        {
            ListInsert(Lc,bi,++k);
            ++j;
        }
    }
    while(i<=lal)
    {
        GetElem(La,i++,ai);
        ListInsert(Lc,ai,++k);
    }
    while(j<=lbl)
    {
        GetElem(Lb,j++,bi);
        ListInsert(Lc,bi,++k);
    }
}
