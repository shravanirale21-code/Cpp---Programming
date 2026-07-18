#include<iostream>
using namespace std;

struct node 
{
    int data;
    struct node *next;

};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

int main()
{
    PNODE newn=NULL;

    newn=new NODE;

    newn->data=11;
    newn->next=NULL;

    cout<<newn->data<<endl;

    return 0;

}