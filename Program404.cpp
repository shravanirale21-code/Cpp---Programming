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
    
    this->first=NULL;
    this->iCount=0;

}

void SinglyLL ::Display()
{
    PNODE temp=NULL;
    temp=this->first;

    while(temp != NULL)                  //while can be changed into for if we are knowing the final value for iteration the code 
    {
        cout<<" | "<<temp->data<<" | -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
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
    
    sobj.Display();
    return 0;

}