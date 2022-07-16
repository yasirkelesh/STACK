#include <stdio.h>
#include <stdlib.h>
#include "stack_arr.h"
stack * tanim()
{
    stack *s =(stack *)malloc(sizeof(stack));
    s->array = NULL;
    s->size = 2;
    s->top = 0;
    return s;

}
int pop( stack *s)
{
    if(s->top <= 0||s->array == NULL){
        printf("%s\n", "dizi bos");
        return -1;
    }
        
    if(s->top <= s->size - 1)
    {
        int *array2 = (int *)malloc(sizeof(int)*s->size/2);
        
        for(int i = 0; i<s->top; i++)
            array2[i] = s->array[i];
        
        free(s->array);//array hala eski yeri göterirken freele !
        s->array = array2;
        s->size /= 2;

    }
    return(--s->top);
}
void push(int a, stack *s)
{
    if(s->array == NULL)
        s->array = (int *)malloc(sizeof(int)*2);
    if(s->top>= s->size)
    {
        int *array2 = (int *)malloc(sizeof(int)*s->size*2);
        
        for(int i = 0; i<s->size; i++)
            array2[i] = s->array[i];
        
        free(s->array);//array hala eski yeri göterirken freele !
        s->array = array2;
        s->size *= 2;

    }
    s->array[s->top++] = a;
}   
void bas(stack *s)
{
    printf("Boyut : %d\n", s->size);
    for(int i  = 0; i<s->top; i++)
        printf("%d\n", s->array[i]);

}