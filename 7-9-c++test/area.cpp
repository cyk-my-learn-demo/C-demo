#include <iostream>
using namespace std;

class shape
{
public:
	virtual double area() = 0;
};

class cirtle:public shape
{
	int x,y;
	double r;
public:
	cirtle(double r)
	{
		this->r = r;
	}
	double area()
	{
		return 3.1415*r*r;
	}
};

class rectangle:public shape
{
	int l;
	int w;
public:
	rectangle(double l,double w)
	{
		this->l = l;
		this->w = w;
	}
	double area()
	{
		return l*w;
	}
};

void dplay(shape *s)
{
	cout << s->area() << endl;
}

int main(int argc, const char *argv[])
{
	cirtle c(2);
	rectangle r(3,4);
	dplay(&c);
	dplay(&r);
	return 0;
}
