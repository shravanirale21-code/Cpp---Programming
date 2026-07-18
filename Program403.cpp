#include<iostream>
using namespace std;

struct node 
{
    int data;             //size 4
    struct node *next;    //size 8

};

typedef struct node NODE;
typedef struct node * PNODE;

class SinglyLL
{
    private:           //new access specifier
        PNODE first;
        int iCount=0;

    public:
        SinglyLL();   //no return value for constructor

    void Display();

    int Count();

    void InsertFirst(int iNo);

    void InsertLast(int iNo);

    void InsertAtPos(int iNo,int iPos);

    void DeleteFirst();

    void DeleteLast();

    void DeleteAtPos(int iPos);
};

SinglyLL::SinglyLL()     //no return value for constructor
{
    cout<<"Inside Constructor\n";
    this->first=NULL;
    this->iCount=0;

}

void SinglyLL ::Display()
{

}

int SinglyLL ::Count()
    {
        return this->iCount;
    }

void SinglyLL ::InsertFirst(int iNo)
{

}

void SinglyLL :: InsertLast(int iNo)
{

}

void SinglyLL :: InsertAtPos(int iNo,int iPos)
{

}

void SinglyLL :: DeleteFirst()
{

}

void SinglyLL :: DeleteLast()
{

}

void SinglyLL :: DeleteAtPos(int iPos)
{

}

int main()
{
    SinglyLL sobj;
    
    return 0;

}