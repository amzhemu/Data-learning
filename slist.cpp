#include <memory.h>
#include<stdio.h>
#include"slist.h"
/*��ʼ��˳���*/
int InitList(SeqList &L)
{
    L.data=(ELemType*)malloc(InitSize*sizeof(ELemType));
    if(L.data==NULL)
    exit(0);
    L.length=0;
    L.MaxSize=InitSize;
    return 1;
}

/*�ڵ�i��λ�ò���Ԫ��e*/
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

/* ɾ����i��Ԫ�أ�����e������ֵ*/
void ListDelete(SeqList &L,int i,ELemType&e)
{
    if(i<1||i>L.length)exit(0);
    e=L.data[i-1];
    for(int j=i;j<L.length;j++)
        L.data[j-1]=L.data[j];
        L.length--;
}

/*���*/
int Length(SeqList L)
{
    return L.length;
}

/*��e���ص�i��Ԫ�ص�ֵ */
void GetElem(SeqList L,int i,ELemType &e)
{
    if(i<1||i>L.length)exit(0);
    e=L.data[i-1];
}
/* ��ֵ����*/
int LocateElem(SeqList L,ELemType e)
{
    for(int i=0;i<L.length;i++)
        if(L.data[i]==e)
        return i+1;
    return 0;
}
/*�������Ա�*/
void DestoryList(SeqList &L)
{
    free(L.data);
    L.length=0;
    L.MaxSize=0;
}
/*������Ա�*/
void ClearList(SeqList &L)
{
 memset(L.data,0,sizeof(SeqList)*L.length);
 L.length=0;
}
/*���Ա��Ƿ�Ϊ��*/
int Empty(SeqList L)
{
if(L.length==0)
    return 1;
return 0;
}
/*��ӡ���Ա�*/
void PrintList(SeqList L)
{
for(int i=0;i<L.length;i++)
    {
    ELemType m=0;
    GetElem(L,i+1,m);
    printf("%d\t",m);
    }
}
