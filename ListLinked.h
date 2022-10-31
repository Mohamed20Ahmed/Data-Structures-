#ifndef LISTLINKED_H_INCLUDED
#define LISTLINKED_H_INCLUDED
typedef int ListEntry;
typedef struct listnode{
  ListEntry entry;
  struct listnode *next;

}ListNode;

typedef struct list{
  int size;
  ListNode *head;
}List;

void CreateList(List *pl);
int ListEmpty(List *pl);
int ListFull(List *pl);
int ListSize(List *pl);
void DestoryList(List *pl);
void insertList(int pos,ListEntry item,List *pl);
void DeleteList(int pos,ListEntry *item,List *pl);

#endif // LISTLINKED_H_INCLUDED
