#include <stdio.h>
#include <stdlib.h>
#include "stack_ll.h"

int main()
{
    node *s = NULL;
    pop(s);
    s = push(s ,10);
    s = push(s,20);
    s = push(s, 12);
    b(s);
    pop(s);
    b(s);


}