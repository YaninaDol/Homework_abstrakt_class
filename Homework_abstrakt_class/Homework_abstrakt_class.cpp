#include <iostream>
#include"Worker.h"
using namespace std;

int main()
{
	int ch;
	cout << " Select which employer you want to enter :\n";
	cout << " 1 - President \n 2 - Manager \n 3 - Worker \n 0 - Exit \n";
	cout << " Enter number : ";
	cin >> ch;
	if (ch == 1)
	{
		string name;
		cout << " Enter Name : ";
		cin >> name;
		string familiya;
		cout << " Enter Surname : ";
		cin >> familiya;
		int year;
		cout << " Enter Year : ";
		cin >> year;
		float zp;
		cout << " Enter Salary : ";
		cin >> zp;
		float term;
		cout << " Enter Term : ";
		cin >> term;

		Employer* one = new President(name, familiya, year, zp, term);
		one->print();

	}
	else if (ch == 2)
	{
		string name;
		cout << " Enter Name : ";
		cin >> name;
		string familiya;
		cout << " Enter Surname : ";
		cin >> familiya;
		int year;
		cout << " Enter Year : ";
		cin >> year;
		float zp;
		cout << " Enter Salary : ";
		cin >> zp;
		string position;
		cout << " Enter position : ";
		cin >> position;

		Employer* second = new Manager(name, familiya, year, zp, position);
		second->print();
	}
	else if (ch == 3)
	{
		string name;
		cout << " Enter Name : ";
		cin >> name;
		string familiya;
		cout << " Enter Surname : ";
		cin >> familiya;
		int year;
		cout << " Enter Year : ";
		cin >> year;
		float zp;
		cout << " Enter Salary : ";
		cin >> zp;
		float stazh;
		cout << " Enter experience : ";
		cin >> stazh;


		Employer* third = new Worker(name, familiya, year, zp, stazh);
		third->print();
	}
	else if(ch==0)cout << " Good bye! \n";
	else cout << " Erorr! \n";
}