/*class bank store acc no, cust name, balance 
derive 2 class  saving(minimum balance) and current(over due amount)*/
#include <iostream>
using namespace std;
class account
{
	protected:
	int accnum;
	string name;
	int bal;
	public:
	account(int num,string n,int b)
	{
		accnum = num;
		name = n;
		bal = b;
	}
	virtual void display()
	{
	}
	virtual void withdraw(){}
};

class saving:public account
{
	int minb;
	public:
	saving(int num,string n,int b,int mb):account(num,n,b)
	{
		minb = mb;
	}
	void withdraw()
	{	
	int x;
		cout<<"Enter the amount you want to  withdraw from saving\n";
		cin>>x;
		if((bal-x)>=minb)
		{
			cout<<"Withdraw success:\n";
			bal = bal - x;
		}
		else
		{
			cout<<"Balance is not enough:\n";
		}
	}
	void display()
	{
	    cout<<"Name: "<<name;
	    cout<<"accno: "<<accnum<<endl;
		cout<<"Your saving balance is: "<<bal<<endl;
	}
};

class current:public account
{
	int overdue;
	public:
	current(int num,string n,int b,int due):account(num,n,b)
	{
		overdue = due;
	}
	void withdraw()
	{
		int x;
		cout<<"Enter the amount you want to withdraw from current\n";
		cin>>x;
		cout<<"Withdraw success\n";
		overdue+=x;
	}
	void display()
	{
	    cout<<"NAME: "<<name<<endl;
	    cout<<"accno: "<<accnum<<endl;
		cout<<"Your balance in current account is: "<<bal<<endl;
		cout<<"Overdue amount: "<<overdue<<endl;
	}
	
};

int main()
{
	saving s(12121,"PREETI",20000,500);
	current c(2211,"SOUMYA",1000,5000);
	account *ac[] = {&s,&c};
	ac[0]->withdraw();
	ac[0]->display();
	ac[1]->withdraw();
	ac[1]->display();
}
