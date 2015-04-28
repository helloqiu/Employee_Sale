#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<string>
using namespace std;
class Employee{
	public :
		Employee(const string &name);
		string getName(void);
		void setLevel(int level);
		int getLevel(void);
	private :
		string name;
		int level;
};
#endif
