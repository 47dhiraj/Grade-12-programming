#include<iostream>
using namespace std;


// This below program demonstrates Multilevel Inheritance.
// This below program shows how multi level inheritance can be achieved in c++.

/*
	
	 student
		|
	  marks
	   |
	 result

*/


// student is a base(parent) class
class student
{
	int roll;
	char name[25];
	
	public:
		void getdata()
		{
			cout << "Enter name and roll: ";
			cin >> name >> roll;
		}
		
		void display()
		{
			cout << "\nYour Name: " << name << endl;
			cout << "Your Roll no.: " << roll << endl;
		}


};



// marks is a derived/child class which is inheriting from student class which is a base/parent class
class marks : public student
{
	protected:
		int session1, session2;
	
	public:
		void getmarks()
		{
			cout << "\nEnter two marks: ";
			cin >> session1 >> session2;
	
		}
		
		void disp()
		{
			cout << "Marks= " << session1 << session2 << endl;
		}

};



// result is derived class from the point of view of marks class
// where as, we can also say, result is als a subderived class from the point of view of student class

class result : public marks
{
	int total;
	
	public:
		void add()
		{
			total = session1 + session2;
			cout << "\nTotal= " << total;
		}

};



int main()
{
	result R;
	
	R.getdata();
	R.getmarks();
	
	R.display();
	
	R.add();
	
	return 0;
}


