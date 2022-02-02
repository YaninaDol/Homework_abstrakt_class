#include <iostream>
using namespace std;
class Employer
{
protected:
	string name;
	string familiya;
	int year;
	float zp;

public:
	
	virtual void print() = 0;
};

