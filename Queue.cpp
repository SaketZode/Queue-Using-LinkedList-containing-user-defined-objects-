#include "Queue.h"
//#include "Retail.h"

template <class T>
Queue<T>::Queue():front(nullptr), rear(nullptr)
{
	cout<<"Queue CTOR call"<<endl;
}

template <class T>
void Queue<T>::Enqueue(T ele){
	if(ll.AddAtBegin(ele)){
		cout<<"\nElement inserted!"<<endl;
		ele.Display();
	}
}

template <class T>
T Queue<T>::Dequeue(){
	T ele = ll.DelFromEnd();
	cout<<"\nDeleted Element "<<endl;
	ele.Display();
}

template<class T>
void Queue<T>::DispQueue(){
	ll.Display();
}

template <class T>
void Queue<T>::Q_Search(string d){
	ll.SearchNode(d);
}
