#ifndef STACK_ARR
#define STACK_ARR
struct s
{
    int *array;
    int size;
    int top;

};
typedef struct s stack;


int pop(stack *s);
void push(int a,stack *s);
void bas(stack *s);
stack * tanim();


#endif