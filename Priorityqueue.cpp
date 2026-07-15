using namespace std;
#include<iostream>
#include "Priorityqueue.h"
template<class T>
PriQueue<T> :: PriQueue()
{
	head = NULL;
}

template<class T>	
PriQueue<T> ::~PriQueue()
{
	Pnode<T>* current = head;
	while(current!= NULL)
	{
		Pnode<T> *temp = current;
		current = current->getNext();
		delete temp;
	}
}


template<class T>	
void PriQueue<T> :: enqueue(T a, int p )
{
	Pnode<T> *temp = new Pnode<T>(a,p);
	if(head == NULL)
	{
		head = temp;
	}
    //at head
    else if(head->getPr()>p) {
        temp->setNext(head);
        head=temp;
        return;
    }
	else
	{
		Pnode<T>* current = head->getNext();
                        Pnode<T>* prev=head;

		while(current!= NULL)
		{
            if (current->getPr()>p){
                
                temp->setNext(current);
                prev->setNext(temp);
                return;
            }
            prev=current;
			current = current->getNext();  
		}
        //in case last node
        temp->setNext(NULL);
        prev->setNext(temp);
	}
}
template<class T>
T PriQueue<T> :: dequeue()
{
	if(head != NULL)
	{
		T temp_data = head->getData();
		Pnode<T> *temp = head;
		head = head->getNext();
		delete temp;
		return temp_data;
	}
}
template<class T>
T PriQueue<T> :: peek()
{
	if(head != NULL)
	{
		return head->getData();
	}
}
template<class T>
bool PriQueue<T> :: isEmpty()
{
	if(head != NULL)
	{
		return false;
	}
	else
	{
		return true;
	}
}