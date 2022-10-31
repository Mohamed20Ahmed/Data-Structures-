#include <stdio.h>
#include <stdlib.h>
#include "ListLinked.h"

void CreateList(List *pl){
 pl->head = NULL;
 pl->size = 0;
}

int ListEmpty(List *pl){
  return !pl->head;
}

int ListFull(List *pl){
  return 0;
}

int ListSize(List *pl){
  return pl->size;
}

void DestoryList(List *pl){
ListNode *p;
p = pl->head;
while(pl->head){
    p = pl->head->next;
    free(pl->head);
    pl->head = p;
}
pl->size = 0;
}

void insertList(int pos,ListEntry item,List *pl){
ListNode *p = (ListNode *) malloc(sizeof(ListNode));
ListNode *q;
int i;
p->entry = item;
p->next = NULL;
if(pos==0){
   p->next = pl->head;
   pl->head = p;
}
else{
for(q=pl->head, i = 0;i<pos-1;i++)
    q = q->next;
p->next = q->next;
q->next=p;
}
pl->size++;
}

void DeleteList(int pos,ListEntry *item,List *pl){
ListNode *q,*tmp;
int i;
if(pos==0){
   *item = pl->head->entry;
    tmp = pl-> head->next;
   free(pl->head);
   pl->head = tmp;
}
else{
for(q=pl->head, i = 0;i<pos-1;i++)
    q = q->next;
*item =q->next->entry;
tmp=q->next->next;
free(q->next);
q->next=tmp;
}
pl->size--;
}
