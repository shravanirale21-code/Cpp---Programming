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

    while(temp != NULL)                  
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
    PNODE newn=NULL;
    newn=new NODE;                //malloc line 
    newn->data=iNo;
    newn->next=NULL;

    if(this->iCount == 0)

    {
        this->first=newn;
    }
    else
    {
        newn->next=this->first;
        this->first=newn;
    }

    this->iCount++;          //important "++".....its compulsory  for the if as well as else
}

void SinglyLL :: InsertLast(int iNo)
{
    PNODE newn=NULL;
    PNODE temp=NULL;
     
    newn=new NODE;                //malloc line 
    newn->data=iNo;
    newn->next=NULL;

    if(this->iCount == 0)

    {
        this->first=newn;
    }
    else
    {
        temp=this->first;

        while(temp->next !=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
    }

    this->iCount++;     
}

void SinglyLL :: InsertAtPos(int iNo,int iPos)
{
    int i=0;
    PNODE temp=NULL;
    PNODE newn =NULL;

    if((iPos < 1) || (iPos > iCount+1))
    {
        cout<<"Invalid Position\n";
    }

    if(iPos==1)
    {
        this->InsertFirst(iNo);
    }
    else if(iPos == iCount+1)
    {
        this->InsertLast(iNo);
    }
    else
    {
        newn =new NODE;             //initialization is very imp 

        newn->data=iNo;
        newn->next=NULL;

        temp=this->first;

        for(i=1;i<iPos-1;i++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;       //newn ch next madhe next adress store kartat...
        temp->next=newn;

        this->iCount++;         //it must be inside else loop
    }
}

void SinglyLL :: DeleteFirst()
{
    PNODE temp=NULL;

    if(this->first == NULL)

    {
        return;
    }
    else if(this->first->next == NULL)
    {
        delete this->first;
        this->first=NULL;
    }
    else
    {
        temp=this->first;
        this->first=this->first->next;
        delete temp;
    }

    this->iCount--;          //important "--".....its compulsory  for the if as well as else
}

void SinglyLL :: DeleteLast()
{
    PNODE temp=NULL;

     if(this->first == NULL)

    {
        return;
    }
    else if(this->first->next == NULL)
    {
        delete this->first;
        this->first=NULL;
    }
    else
    {
        temp=this->first;
        while(temp->next->next != NULL)
        {
            temp=temp->next;
        }
        delete temp->next;             //delete is a operator
        temp->next=NULL;
    }

    this->iCount--; 
}

void SinglyLL :: DeleteAtPos(int iPos)
{
    int i=0;
    PNODE temp=NULL;
    PNODE target=NULL;

    if((iPos < 1) || (iPos > iCount))
    {
        cout<<"Invalid Position\n";
    }

    if(iPos==1)
    {
        this->DeleteFirst();
    }
    else if(iPos == iCount)
    {
        this->DeleteLast();
    }
    else
    {
        temp=this->first;

        for(i=1;i<iPos-1;i++)
        {
            temp=temp->next;
        }
        target=temp->next;
        temp->next=target->next;
        delete target;


        this->iCount--;         //it must be inside else loop
    }
}

int main()
{
    SinglyLL sobj;

    int iChoice=0;
    int iValue=0;
    int iRet=0;
    int iPosition=0;

    while(_____)  //unconditional loop .... jo paryanter break karat nahi toh paryanter firat rahto loop is call unconditional
    {
        cout<<"-----------------------\n";
        cout<<"Enter your choice:\n";
        cout<<"-----------------------\n";
        cout<<"1:Insert node at first position\n";
        cout<<"2:Insert node at last position\n";
        cout<<"3:Insert node at given position\n";
        cout<<"4:Delete node at first position\n";
        cout<<"5:Delete node at last position\n";
        cout<<"6:Delete node at given position\n";
        cout<<"7:Display the Elements:\n";
        cout<<"8:Count the number of elements:\n";
        cout<<"9:Terminate the application...\n";
        cout<<"-----------------------\n";
    }

   return 0;
}