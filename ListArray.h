#ifndef LISTARRAY_H_INCLUDED
#define LISTARRAY_H_INCLUDED
#define MAX 10
typedef int ListEntry;

typedef struct list{
  int size;
  ListEntry entry[MAX];
}List;

void CreateList(List *pl);
int ListEmpty(List *pl);
int ListFull(List *pl);
int ListSize(List *pl);
void DestoryList(List *pl);
void insertList(int pos,ListEntry item,List *pl);
void DeleteList(int pos,ListEntry *item,List *pl);

#endif // LISTARRAY_H_INCLUDED
