#include"Sales.h"
Sales::Sales(const string &name):Employee(name){
	
}
void Sales::setSaleCount(int count){
	salecount = count;
}
int Sales::getSaleCount(void){
	return salecount;
}
