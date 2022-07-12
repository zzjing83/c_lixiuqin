#ifndef LIST_H__
#define LIST_H__

typedef int datatype;

typedef struct node_st
{
    datatype data;
    struct node_st *next;
}linknode;

linknode *list_creat();
int list_insert_at(linknode *, int i,datatype *);
int list_order_insert(linknode *,datatype *);

int list_delete_at(linknode *, int i,datatype *);
int list_delete(linknode *,datatype *);
int list_isempty(linknode *);
void list_display(linknode *);
void list_destroy(linknode *);





#endif