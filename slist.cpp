#include <memory.h>
#include<stdio.h>
#include"slist.h"
/*初始化顺序表*/
int InitList(SeqList &L)
{
    L.data=(ELemType*)malloc(InitSize*sizeof(ELemType));
    if(L.data==NULL)
    exit(0);
    L.length=0;
    L.MaxSize=InitSize;
    return 1;
}

/*在第i个位置插入元素e*/
void ListInsert(SeqList &L,ELemType e,int i)
{
    ELemType *newElem=NULL;
   if(i<1||i>L.length+1)exit(0);
   if(L.length>=L.MaxSize)
    {
      newElem=(ELemType*)realloc(L.data,(L.MaxSize+ListIncrement)*sizeof(ELemType));
      if(newElem==NULL)exit(0);
      L.data=newElem;
      L.MaxSize+=ListIncrement;
    }
    for(int j=L.length;j>=i;j--)
        L.data[j]=L.data[j-1];
    L.data[i-1]=e;
    L.length++;
}

/* 删除第i个元素，并用e返回其值*/
void ListDelete(SeqList &L,int i,ELemType&e)
{
    if(i<1||i>L.length)exit(0);
    e=L.data[i-1];
    for(int j=i;j<L.length;j++)
        L.data[j-1]=L.data[j];
        L.length--;
}

/*求表长*/
int Length(SeqList L)
{
    return L.length;
}

/*用e返回第i个元素的值 */
void GetElem(SeqList L,int i,ELemType &e)
{
    if(i<1||i>L.length)exit(0);
    e=L.data[i-1];
}
/* 按值查找*/
int LocateElem(SeqList L,ELemType e)
{
    for(int i=0;i<L.length;i++)
        if(L.data[i]==e)
        return i+1;
    return 0;
}
/*销毁线性表*/
void DestoryList(SeqList &L)
{
    free(L.data);
    L.length=0;
    L.MaxSize=0;
}
/*清空线性表*/
void ClearList(SeqList &L)
{
 memset(L.data,0,sizeof(SeqList)*L.length);
 L.length=0;
}
/*线性表是否为空*/
int Empty(SeqList L)
{
if(L.length==0)
    return 1;
return 0;
}
/*打印线性表*/
void PrintList(SeqList L)
{
for(int i=0;i<L.length;i++)
    {
    ELemType m=0;
    GetElem(L,i+1,m);
    printf("%d\t",m);
    }
}
