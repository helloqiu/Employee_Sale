#ifndef SALES_H
#define SALES_H
#include "Employee.h"
#include <string>
using namespace std;
class Sales : public Employee{
	public :
		Sales(const string &name);
		Sales(const Employee &emp);
		void setSaleCount(int count);
		int getSaleCount(void);
	private : 
		int salecount;
};
#endif
