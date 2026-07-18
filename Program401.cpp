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
    private:           //new access specifier
        PNODE first;
        int iCount=0;

    public:
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
    sobj.first=NULL;   //error
    sobj.iCount=15;    //error
    return 0;

}