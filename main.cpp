#include "Queue.cpp"

int main(){
	Queue <Retail> q;
	Retail r;
	int ch;
	string add_s;
	do{
		cout<<"\n1. Add";	
		cout<<"\n2. Delete";	
		cout<<"\n3. Display Queue";	
		cout<<"\n4. Search Store at address";	
		cout<<"\n5. Exit";
		cout<<"\n\nEnter your choice : ";
		cin>>ch;
		switch (ch){
			case 1:
				{
					r.Accept();
					q.Enqueue(r);
				}
				break;

			case 2:
				{
					q.Dequeue();
				}
				break;

			case 3:
				{
					q.DispQueue();
				}
				break;

			case 4:
				{

					cout<<"\n\nEnter address to search shop : ";
					cin>>add_s;
					q.Q_Search(add_s);
				}
				break;
		}
	}while(ch != 5);

	return 0;
}

		
