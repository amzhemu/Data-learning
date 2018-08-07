#include <iostream>
#include"slist.h"
using namespace std;
void Reverse(SeqList &L)
{
  ELemType temp;
  for(int i=0;i<L.length/2;i++)
    {
    temp=L.data[i];
    L.data[i]=L.data[L.length-i-1];
    L.data[L.length-i-1]=temp;
    }
}
