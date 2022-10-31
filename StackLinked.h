#ifndef STACKLINKED_H_INCLUDED
#define STACKLINKED_H_INCLUDED
#define MAX 10
typedef int stackEntry;

typedef struct stacknode{
  stackEntry entry;
  struct stacknode *next;
}StackNode;

typedef struct stack{
  StackNode *top;
}stackl;

void createStack(stackl *ps);
int stackEmpty(stackl *ps);
int stackFull(stackl *ps);
void pushl(stackEntry item,stackl *ps);
void popl(stackEntry *item,stackl *ps);
void ClearStack(stackl *ps);
#endif // STACKLINKED_H_INCLUDED
