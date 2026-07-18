//DOUBLY LINEAR LINKED LIST.....//DoublyLL

#include<iostream>
using namespace std;

struct node 
{
    int data;             //size 4
    struct node *next;    //size 8
    struct node *prev;    //$ - changed in doubly
};

typedef struct node NODE;
typedef struct node * PNODE;

class DoublyLL
{
    private:           //new access specifier
        PNODE first;
        int iCount=0;

    public:
        DoublyLL();   //no return value for constructor

    void Display();

    int Count();

    void InsertFirst(int iNo);

    void InsertLast(int iNo);

    void InsertAtPos(int iNo,int iPos);

    void DeleteFirst();

    void DeleteLast();

    void DeleteAtPos(int iPos);
};

DoublyLL::DoublyLL()     //no return value for constructor
{
    cout<<"Inside Constructor\n";
    this->first=NULL;
    this->iCount=0;

}

void DoublyLL ::Display()
{

}

int DoublyLL ::Count()
    {
        return this->iCount;
    }

void DoublyLL ::InsertFirst(int iNo)
{

}

void DoublyLL :: InsertLast(int iNo)
{

}

void DoublyLL :: InsertAtPos(int iNo,int iPos)
{

}

void DoublyLL :: DeleteFirst()
{

}

void DoublyLL :: DeleteLast()
{

}

void DoublyLL :: DeleteAtPos(int iPos)
{

}

int main()
{
    DoublyLL sobj;
    
    return 0;

}