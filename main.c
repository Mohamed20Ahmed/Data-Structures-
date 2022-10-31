#include <stdio.h>
#include <stdlib.h>
#include "ListLinked.h"
int main()
{List l;
CreateList(&l);
insertList(0,5,&l);
insertList(6,7,&l);
insertList(5,8,&l);

int x;
DeleteList(6,&x,&l);
printf("%d",x);
    return 0;
}
