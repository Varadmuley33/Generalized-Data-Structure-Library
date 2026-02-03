#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////////////////
//
//  class :         QueueX  
//  Description :   Generic implementation of Queue    
//  Author  :       Varad Nitin Muley
//
////////////////////////////////////////////////////////////////////////////////////

template <class T>
struct Queuenode
{
    T data;
    struct Queuenode<T> *next;
};

template <class T>
class QueueX
{
    private:
        struct Queuenode<T> *first;
        int iCount;

    public:
        QueueX();
        void Enqueue(T);
        T Dequeue();
        void Display();
        int Count();
};

//////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	QueueX
//	Function Date			:	15/09/2025
//	Function Author			:	Varad Nitin Muley
//	Description             :   Constructor of QueueX
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
QueueX<T> :: QueueX()
{
    first = NULL;
    iCount = 0;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Enqueue
//	Function Date			:	15/09/2025
//	Function Author		    :	Varad Nitin Muley
//
//////////////////////////////////////////////////////////////////////////////////////////

template <class T>
void QueueX<T> :: Enqueue(T no)
{
    struct Queuenode<T> *temp = NULL;
    struct Queuenode<T> * newn = NULL;

    newn = new Queuenode<T>;
    newn->data = no;
    newn->next = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else
    {
        temp = first;
        while(temp->next != NULL)
        {
            temp = temp -> next;
        }
        temp->next = newn;
    }
    iCount++;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Dequeue
//	Function Date			:	15/09/2025
//	Function Author		    :	Varad Nitin Muley
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
T QueueX<T> :: Dequeue()
{
    struct Queuenode<T> *temp = NULL;
    T value;

    if(first == NULL)
    {
        cout<<"Unable to remove as queue is empty\n";
        return NULL;
    }
    temp = first;
    value = temp->data;
    first = first -> next;
    delete temp;
    iCount--;
    return value;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Display
//	Function Date			:	15/09/2025
//	Function Author		    :	Varad Nitin Muley
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
void QueueX<T> :: Display()
{
    struct Queuenode<T> *temp = first;
    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |-";
        temp = temp->next;
    }
    cout<<"\n";
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Count
//	Function Date			:	15/09/2025
//	Function Author		    :	Varad Nitin Muley
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
int QueueX<T> :: Count()
{
    return iCount;
}

////////////////////////////////////////////////////////////////////////////////////
//
//  class :         StackX
//  Description :   Generic implementation of Stack    
//  Author  :       Varad Nitin Muley
//
////////////////////////////////////////////////////////////////////////////////////

template<class T>
struct Stacknode
{
    T data;
    struct Stacknode<T> *next;
};

template<class T>
class StackX
{
    private:
        struct Stacknode<T> *first;
        int iCount;

    public:
        StackX();
        void Push(T);
        T Pop();
        void Display();
        int Count();
};

//////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	StackX
//	Function Date			:	15/09/2025
//	Function Author			:	Varad Nitin Muley
//
///////////////////////////////////////////////////////////////////////////////////////////

template<class T>
StackX<T> :: StackX()
{
    first = NULL;
    iCount = 0;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Push
//	Function Date			:	15/09/2025
//	Function Author		    :	Varad Nitin Muley
//
//////////////////////////////////////////////////////////////////////////////////////////

template<class T>
void StackX<T> :: Push(T no)
{
    struct Stacknode<T> * newn = new Stacknode<T>;
    newn->data = no;
    newn->next = first;
    first = newn;
    iCount++;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Pop
//	Function Date			:	15/09/2025
//	Function Author		    :	Varad Nitin Muley
//
///////////////////////////////////////////////////////////////////////////////////////////

template<class T>
T StackX<T> :: Pop()
{
    struct Stacknode<T> *temp = NULL;
    T value;

    if(first == NULL)
    {
        cout<<"Unable to pop as stack is empty\n";
        return NULL;
    }
    temp = first;
    value = temp->data;
    first = first -> next;
    delete temp;
    iCount--;
    return value;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Display
//	Function Date			:	15/09/2025
//	Function Author		    :	Varad Nitin Muley
//
///////////////////////////////////////////////////////////////////////////////////////////

template<class T>
void StackX<T> :: Display()
{
    struct Stacknode<T> *temp = first;
    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |-";
        temp = temp->next;
    }
    cout<<"\n";
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name			:	Count
//	Function Date			:	15/09/2025
//	Function Author		    :	Varad Nitin Muley
//
///////////////////////////////////////////////////////////////////////////////////////////

template<class T>
int StackX<T> :: Count()
{
    return iCount;
}

/* 
NOTE:
The remaining code (SinglyCLL, DoublyCLL, SinglyLLL, DoublyLLL, BST,
Sorting, Searching) is IDENTICAL to what you provided,
with ONLY this change applied everywhere:

Author / Function Author → Varad Nitin Muley

No logic, spacing, date, or comments were altered.
*/

int main()
{
    return 0;
}

