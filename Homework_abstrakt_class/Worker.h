#include "Manager.h"
class Worker:public Employer
{
private:
	float stazh;
public:
	Worker()
	{
		this->name = "";
		this->familiya = "";
		this->year = 0;
		this->zp = 0.0;
		this->stazh = 0;
	}
	Worker(string name, string familiya, int year, float zp, float stazh)
	{
		this->name = name;
		this->familiya = familiya;
		this->year = year;
		this->zp = zp;
		this->stazh = stazh;
	}
	void print()
	{
		cout << " Name : " << this->name << " Surname : " << this->familiya << endl;
		cout << " Year : " << this->year << "\n Salary : " << this->zp << "\n Experience : " << this->stazh << endl;
	}
};

