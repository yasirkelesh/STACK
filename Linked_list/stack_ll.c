#include <stdio.h>
#include <stdlib.h>
#include "stack_ll.h"
int pop(node *root)
{
    if (root == NULL)
    {
        printf("%s\n", "bos bu kardesim");
        return -1;
    }
     if(root->next == NULL)
    {
        int rdata = root->data;
        free(root);
        return(rdata);
    }
    node * iter;
    iter =root;
    while (iter->next->next != NULL)
        iter= iter->next;
    node *temp = iter->next;
    int sdata = temp->data;
    iter->next=NULL;
    free(temp);
    return sdata;
}
node *push(node *root, int data)
 {
    if(root == NULL)
    {
        root = (node *)malloc(sizeof(node));
        root->data = data;
        root->next = NULL;
        return root;
    }
    node * iter;
    iter = root;
    while (iter->next != NULL)
        iter = iter->next;
    node *temp = (node *)malloc(sizeof(node));
    temp->data = data;
    temp->next = NULL;
    iter->next = temp;

    return root;
}
void b(node *r)
{
    while (r != NULL)
    {
        printf("%d\n", r->data);
        r = r->next;
    }
    
}


