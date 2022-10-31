#include <stdio.h>
#include <stdlib.h>
#include "ListArray.h"

void CreateList(List *pl){
 pl->size =0;
}
int ListEmpty(List *pl){
  return pl->size==0;
}
int ListFull(List *pl){
  return pl->size ==MAX;
}
int ListSize(List *pl){
  return pl->size;
}
void DestoryList(List *pl){
   pl->size = 0;
}
void insertList(int pos,ListEntry item,List *pl){
for(int i = pl->size ; i > pos;i++)
    pl->entry[i] = pl->entry[i-1];
pl->entry[pos] = item;
pl->size++;
}
void DeleteList(int pos,ListEntry *item,List *pl){
*item = pl->entry[pos];
for(int i = pos; i < pl->size-1;i++)
    pl->entry[i] = pl->entry[i+1];
pl->size--;
}
