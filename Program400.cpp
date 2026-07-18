#include<iostream>
using namespace std;

struct node 
{
    int data;             //size 4
    struct node *next;    //size 8

};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class SinglyLL
{
    public:
        PNODE first;
        int iCount=0;

        SinglyLL()     //no return value
        {
            cout<<"Inside Constructor\n";
            this->first=NULL;

        }
};

int main()
{
    SinglyLL sobj;
    //5 nodes
    sobj.first=NULL;   //drawback
    sobj.iCount=15;    //drawback
    return 0;

}