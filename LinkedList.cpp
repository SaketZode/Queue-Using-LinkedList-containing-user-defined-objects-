/***********LinkedList.cpp***********/

#include "LinkedList.h"
#include "Retail.cpp"

template <class T>
bool LinkedList<T>::IsEmpty(){
	return (head==nullptr && tail==nullptr);
}

template <class T>
LinkedList<T>::LinkedList():head(nullptr), tail(nullptr), cnt(0)
{	}

template <class T>
LinkedList<T>::~LinkedList(){
	
}

template <class T>
bool LinkedList<T>::AddAtBegin(T ele){
	bool Success = false;
	Node<T> *temp = new Node<T>;
	temp->SetData(ele);
	if(IsEmpty()){
		head = tail = temp;
	}
	else{
		temp->SetNext(head);
		head = temp;
	}
	cnt++;
	Success = true;
	return Success;
}

template <class T>
T LinkedList<T>::DelFromEnd(){
	T ele;
	if(IsEmpty()){
		throw runtime_error("Empty List!");
	}
	ele = tail->GetData();
	Node<T> *t = head;
	if(head == tail){
		delete t;
		head = tail = nullptr;
	}
	else{
		while(t->GetNext() != tail){
			t = t->GetNext();
		}
		t->SetNext(nullptr);
		delete tail;
		tail = t;
	}
	cnt--;
	return ele;
}

template <class T>
void LinkedList<T>::SearchNode(string s_data){
	Node<T> *t = head;
	int flag = 0;
	while(t != nullptr){
		if(s_data == (t->GetData()).getAddr()){
			flag = 1;
			cout<<"\n"<<t->GetData()<<endl;
		}
		t = t->GetNext();
	}
	if (flag == 0){
		cout<<"\nStores at given address not found"<<endl;
	}
}

template <class T>
void LinkedList<T>::Display(){
	if(IsEmpty()){
		throw runtime_error("Empty List");
		return;
	}
	Node<T> *t = head;
	while(t != nullptr){
		cout<<t->GetData()<<"-->";
		t = t->GetNext();
	}
	cout<<"nullptr"<<endl;
}
