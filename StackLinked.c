#include <stdio.h>
#include <stdlib.h>
#include "StackLinked.h"

void CreateStack(Stack *ps){
   ps -> top = NULL;
}

int StackEmpty(Stackl *ps){
   return ps -> top == NULL;
}

int stackFull(stackl *ps){
   return 0;
}

void pushl(stackEntry item,stackl *ps){
   StackNode *p = (StackNode *) malloc(sizeof(StackNode));
   p->entry = item;
   p->next = ps->top;
   ps->top = p;
}

void popl(stackEntry *item,stackl *ps){
  StackNode *p = ps->top;
  *item = ps->top->entry;
  ps->top = ps->top->next;
  free(p);
}

void ClearStack(stackl *ps){
  StackNode *p = ps->top;
  while(p){
    p = p->next;
    free(ps->top);
    ps->top = p;
  }
};
