#include"Employee.h"

Employee::Employee(const string &name){
	this -> name = name;
	level = 0;
}

void Employee::setLevel(int level){
	this -> level = level;
}

int Employee::getLevel(void){
	return level;
}

string Employee::getName(void){
	return name;
}
