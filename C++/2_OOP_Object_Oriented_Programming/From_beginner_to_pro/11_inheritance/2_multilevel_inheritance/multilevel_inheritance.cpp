#include<iostream>
using namespace std;
class student
{
	int roll;
	char name[25];
	public:
		void getdata()
		{
			cout<<"Enter name and roll:";
			cin>>name>>roll;
		}
		void display()
		{
			cout<<"Name is:"<<name<<endl;
			cout<<"ROll no."<<roll<<endl;
		}


};
class marks : public student
{
	protected:
	int session1, session2;
	public:
		void getmarks()
		{
			cout<<"Enter two marks:"<<endl;
			cin>>session1>>session2;

		}
		void disp()
		{
			cout<<"Marks="<<session1<<session2;
		}

};
class result : public marks
{
	int total;
	public:
		void add()
		{
			total=session1+ session2;
			cout<<"Total="<<total;
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


