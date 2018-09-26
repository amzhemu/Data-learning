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
    ELemType *data;     /*��̬���������ָ�룬�洢��ַ */
    int MaxSize;
    int length; /* ˳�����������͵�ǰ���� */
} SeqList;           /* ˳�������*/

int InitList(SeqList &L);/*��ʼ�����Ա�*/
int Length(SeqList L);/*���������˳���L�ĳ��ȣ�������Ԫ�ظ���*/
int LocateElem(SeqList L,ELemType e);/*��ֵ����*/
void GetElem(SeqList L,int i,ELemType &e);/*��λ���ң���e���ص�i��Ԫ�ص�ֵ*/
void ListInsert(SeqList &L,int i,ELemType e);/*�������*/
void ListDelete(SeqList &L,int i,ELemType &e);/*ɾ������*/
void DestoryList(SeqList &L);/*���ٲ���*/
void ClearList(SeqList &L);/*������Ա�*/
void PrintList(SeqList L);/*��ӡ���Ա�*/
int Empty(SeqList L);/*�ж����Ա��Ƿ�Ϊ��*/

#endif // SLIST_H_INCLUDED
