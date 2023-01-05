//create a class employee stores name,id and salary.derive 2 classes regular(DA,HRA BS) and part time(NO OF HOURS, PAY PER HOUR)
//CALCULATE THE SALARY OF REGULAR EMPLOYEE AND PART TIME EMPLOYEE USING VIRTUAL FUNC
#include<iostream>
using namespace std;
class employee
{
	protected:
	string name;
	int id;
	int salary;
	public:
    employee(string n,int i)
    {
        name = n;
        id = i;
    }
	virtual void display()
	{
		
	}	
};

class regular:public employee
{
	protected:
	int da;
	int hra,bs;
	
	public:
    regular(int d,int h,int b,string n,int i):employee(n,i)
    {
        da = d;
        hra = h;
        bs = b;
    }
	void display()
	{
		cout<<"Name: "<<name<<"\nid: "<<id<<endl;
		salary = bs+hra+da;
		cout<<"Salary="<<salary<<endl;
	}
};

class parttime:public employee
{
	protected:
	int nohr;
	int parhr;
	public:
	parttime(int no,int p,string n,int i):employee(n,i)
	{
	    nohr = no;
	    parhr = p;
	}

	void display()
	{
		cout<<"Name: "<<name<<"\nid: "<<id<<endl;
		salary = nohr*parhr;
		cout<<"Salary="<<salary<<endl;
	}
};

int main()
{
	regular r(100,200,5000,"Soumya",260);
	parttime p(12,400,"Sakshi",148);
	employee *e[] = {&r,&p};
	e[0]->display();
	e[1]->display();
	return 0;
}
