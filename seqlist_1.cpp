#include <iostream>
#include"slist.h"
using namespace std;

bool del_min(SeqList &L,ELemType &value)
    {
        if(L.length==0)
            return false;
        value=L.data[0];
        int j=0;
        for(int i=1; i<L.length; i++)
        {
            if(value>L.data[i])
               { 
                value=L.data[i];
                j=i;}
        }
        L.data[j]=L.data[L.length-1];
        L.length--;
        return true;
    }
