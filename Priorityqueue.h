#ifndef PRIORITYQUEUE_H
#define PRIORITYQUEUE_H
using namespace std;
#include "Priorityqueuenode.h"
template<class T>
class PriQueue
{
	private:
	
		Pnode<T>* head;
	
	
	public:
		PriQueue();//set head to null
		
		~PriQueue();// ???
		
		void enqueue(T, int);//add a new node at the end of linked list with data provided as argument
		
		T dequeue();//return the data stored in first node and delete the first node
		
		T peek();//return the data stored in first node
		
		bool isEmpty();//return true if there is no node in Queue
		
		
};
#endif