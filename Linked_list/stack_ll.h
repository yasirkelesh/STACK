#ifndef STACK_LL
#define STACK_LL
struct n
{
    struct n * next;
    int data;
};typedef struct n node;
int pop( node *);
node * push ( node *,  int);
void b(node *r);
 


#endif