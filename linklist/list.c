#include <stdio.h>
#include <stdlib.h>
#include "list.h"



linknode *list_creat()
{
    linknode *me;
    me = malloc(sizeof (*me));
    if (me == NULL)
        return NULL;
    me ->next == NULL;

    return me;

}
int list_insert_at(linknode *me, int i,datatype *data)
{
    int j = 0;
    linknode *node ,*newnode;

    if(i <0)
        return -1;

    while(j<i && node != NULL)
    {
        node = node->next;
        j++;
    }
    if(node)
    {
        newnode = malloc(sizeof(*newnode));
        if (newnode == NULL)
            return -2;
        newnode ->data = *data;
//        newnode ->next = NULL;
        newnode ->next = node ->next;
        node->next = newnode;
        return 0;
    } else
        return -3;
}
int list_order_insert(linknode *me,datatype *data)
{

}

int list_delete_at(linknode *me, int i,datatype *data)
{

}
int list_delete(linknode *me,datatype *data)
{

}
int list_isempty(linknode *me)
{
    if(me->next == NULL)
        return 0;
    return 1;
}

void list_display(linknode *me)
{
    linknode *node = me->next;
    if (list_isempty(me) ==0)
        return;
    while(node != NULL)
    {
        printf("%d ",node->data);
        node = node->next;

    }
    printf("\n");
    return;
}

void list_destroy(linknode *me)
{
    linknode *node,*next;
    for(node = me->next;node!=NULL;node = next)
    {
        next = node->next;
        free(node);
    }
    free(me);
    return;

}


