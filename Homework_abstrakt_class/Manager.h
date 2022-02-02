#include "President.h"
class Manager:public Employer
{
private:
	string dolzhnost;
public:
	Manager()
	{
		this->name = "";
		this->familiya = "";
		this->year = 0;
		this->zp = 0.0;
		this->dolzhnost = "";
	}
	Manager(string name, string familiya, int year, float zp, string dolzhnost)
	{
		this->name = name;
		this->familiya = familiya;
		this->year = year;
		this->zp = zp;
		this->dolzhnost = dolzhnost;
	}
	void print()
	{
		cout << " Name : " << this->name << " Surname : " << this->familiya << endl;
		cout << " Year : " << this->year << "\n Salary : " << this->zp << "\n Position : " << this->dolzhnost << endl;
	}
};

