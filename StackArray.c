#include <stdio.h>
#include "StackArray.h"

void CreateStack(Stack *ps){
   ps -> top = 0;
}

int StackEmpty(Stack *ps){
   return ps -> top == 0;
}

int StackFull(Stack *ps){
  return ps -> top == MAX;
}

void push(StackEntry item,Stack *ps){
  ps -> entry[ps -> top ++] = item;
}

void pop(StackEntry *item,Stack *ps){
  *item = ps -> entry[-- ps -> top];
}
