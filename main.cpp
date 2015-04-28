#include<iostream>
#include"Sales.h"
#include"Employee.h"
using namespace std;

int main(void){
	Employee em1("john");
	em1.setLevel(10);
	cout << em1.getName() << " : " << endl;
	cout << "Level : " << em1.getLevel() << endl;

	Sales sal1("mike");
	sal1.setLevel(12);
	sal1.setSaleCount(10);
	cout << sal1.getName() << " : " << endl;
	cout << "Level : " << sal1.getLevel() << endl;
	cout << "SalesCount : " << sal1.getSaleCount() << endl;
	return 0;
}
