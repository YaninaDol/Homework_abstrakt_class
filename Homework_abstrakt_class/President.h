#include "Employer.h"
class President:public Employer
{
private:
	float srok_pravleniya;
public:
	President()
	{
		this->name = "";
		this->familiya = "";
		this->year = 0;
		this->zp = 0.0;
		this->srok_pravleniya = 0;
	}
	President(string name,string familiya, int year,float zp,float srok_pravleniya)
	{
		this->name = name;
		this->familiya = familiya;
		this->year = year;
		this->zp = zp;
		this->srok_pravleniya = srok_pravleniya;
	}
	 void print()
	{
		cout << " Name : " << this->name << " Surname : " << this->familiya << endl;
		cout << " Year : " << this->year << "\n Salary : " << this->zp << "\n Term : "<<this->srok_pravleniya<<endl;
	}
};

