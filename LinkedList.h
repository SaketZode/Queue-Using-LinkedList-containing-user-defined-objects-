/*************LinkedList.h************/

#ifndef LL_H
#define LL_H

#include "Node.cpp"

template <class T>
class LinkedList{
	private:
		Node<T> *head, *tail;
		int cnt;

	public:
		LinkedList();
		bool AddAtBegin(T);
		T DelFromEnd();
		bool IsEmpty();
		void Display();
		void SearchNode(string);
		~LinkedList();
};

#endif

