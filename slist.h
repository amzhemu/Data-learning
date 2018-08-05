/**
 *FileName:slist.h
 *Author:WC
 *Date:2018/6/18
 *work:sequence list
*/
#ifndef SLIST_H_INCLUDED
#define SLIST_H_INCLUDED
#include<stdlib.h>
#define InitSize 100
#define ListIncrement 10
typedef int ELemType;
typedef struct
{
    ELemType *data;     /*动态分配数组的指针，存储基址 */
    int MaxSize;
    int length; /* 顺序表最大容量和当前个数 */
} SeqList;           /* 顺序表类型*/

int InitList(SeqList &L);/*初始化线性表*/
int Length(SeqList L);/*求表长，返回顺序表L的长度，即数据元素个数*/
int LocateElem(SeqList L,ELemType e);/*按值查找*/
void GetElem(SeqList L,int i,ELemType &e);/*按位查找，用e返回第i个元素的值*/
void ListInsert(SeqList &L,int i,ELemType e);/*插入操作*/
void ListDelete(SeqList &L,int i,ELemType &e);/*删除操作*/
void DestoryList(SeqList &L);/*销毁操作*/
void ClearList(SeqList &L);/*清空线性表*/
void PrintList(SeqList L);/*打印线性表*/
int Empty(SeqList L);/*判断线性表是否为空*/

#endif // SLIST_H_INCLUDED
