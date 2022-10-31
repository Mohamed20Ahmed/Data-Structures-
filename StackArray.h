#ifndef STACKARRAY_H_INCLUDED
#define STACKARRAY_H_INCLUDED
#define MAX 10
typedef int StackEntry;
typedef struct stack{
  int top;
  StackEntry entry[MAX];
}Stack;

void CreateStack(Stack *ps);
int StackEmpty(Stack *ps);
int StackFull(Stack *ps);
void push(StackEntry item,Stack *ps);
void pop(StackEntry *item,Stack *ps);

#endif // STACKARRAY_H_INCLUDED
