#include "Retail.h"

string Retail::getAddr(){
	return address;
}

void Retail::Accept(){
	cout<<"\nEnter id :";
	cin>>id;
	cout<<"\nEnter name : ";
	cin>>name;
	cout<<"\nEnter Address : ";
	cin>>address;
	cout<<"\nEnter product : ";
	cin>>product;
}

void Retail::Display(){
	cout<<"\nId : "<<id;
	cout<<"\nName : "<<name;
	cout<<"\nAddress : "<<address;
	cout<<"\nProduct : "<<product;
}

ostream& operator<<(ostream &out, const Retail &r){
        out<<"\nId : "<<r.id;
        out<<"\nName : "<<r.name;
        out<<"\nAddress : "<<r.address;
        out<<"\nProduct : "<<r.product;
	return out;
}

