#ifndef RETAIL_H
#define RETAIL_H

#include <iostream>
using namespace std;

class Retail{
	private:
		int id;
		string name, address, product;

	public:
		void Accept();
		void Display();
		string getAddr();
		friend ostream& operator<<(ostream &, const Retail &);
};

#endif
