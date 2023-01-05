/*create a class shape . Derive three classes from it; circle, square, and triangle. find area of each shape and 
display it using virtual function*/
#include <iostream>
using namespace std;
class SHAPE{
    protected:
    float area;
    public:
    virtual void display()
    {
    }
    virtual void calculate()
    {
    }
};
class CIRCLE:public SHAPE
{
    int r;
    public:
    void display()
    {
        cout<<"AREA="<<area;
    }
    void calculate()
    {
        area=3.14*r*r;
    }
    CIRCLE(int a)
    {
        r=a;
    }
};
class RECTANGLE:public SHAPE
{
    int l,b;
    public:
    RECTANGLE(int len, int bre)
    {
        l=len;
        b=bre;
    }
    void calculate()
    {
        area=l*b;
    }
    void display()
    {
        cout<<"AREA OF RECTANGLE="<<area;
    }
};
class TRIANGLE:public SHAPE
{
    float base, height;
    public:
    TRIANGLE(float b, float h )
    {
        base=b;
        height=h;
    }
    void calculate()
    {
        area=0.5*base*height;
    }
    void display()
    {
        cout<<"AREA OF TRIANGLE="<<area;
    }
};
int main()
{
    TRIANGLE t(20.5, 30.5);
    CIRCLE c(10);
    RECTANGLE r(5,4);
    SHAPE *p[] = {&t, &c, &r};
    for (int i = 0; i < 3; i++)
    {
        p[i]->calculate();
        p[i]->display();
        cout << endl;
    }
    return 0;

}