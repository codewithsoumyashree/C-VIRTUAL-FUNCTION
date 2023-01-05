#include<iostream>
using namespace std;
class media{
protected:
string title;
float price;
public:
media( string s, float a) {
title = s;
price=a;
}
virtual void display(){}
};

class book:public media
{
int pages;
public:
book(string s, float a, int p):media(s,a){

pages=p;
}

void display(){

cout<<"title: "<<title<<endl;

cout<<"pages: "<<pages<<endl;

cout<<"price: "<<price<<endl;

} 
};

class tape:public media{

float time1;

public:

tape(string s, float a, float t):media(s,a){

time1=t;

}

void display(){

cout<<"title: "<<title<<endl;

cout<<"play time1: "<<time1<<" mins"<<endl;

cout<<"price: "<<price<<endl;

}
};
int main()
{
    book b("SAKSHI",200,500);
    tape c("SOUMYA",300,60);
    media *m[]={&b,&c};
    m[0]->display();
    m[1]->display();
}
