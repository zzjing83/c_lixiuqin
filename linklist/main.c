#include <stdio.h>
#include <stdlib.h>
#include "list.h"


int main()
{
    linknode *l;
    datatype arr[] = {12,23,34,45};
    int i;
    l = list_creat();
    if (l==NULL)
        exit(1);
    for (i=0;i<sizeof (arr)/sizeof (*arr);i++)
    {
        if (list_insert_at(l,0,&arr[i]))
        {
            return 1;
        }
    }
    list_disddplay(l);
    list_destroy(l);


    exit(0);
}