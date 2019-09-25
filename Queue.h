#include "LinkedList.cpp"

template <class T>
class Queue{
	private:
		LinkedList <T> ll;
		Node<T> *front, *rear;

	public:
		Queue();
		void Enqueue(T);
		T Dequeue();
		void DispQueue();
		void Q_Search(string);
};
