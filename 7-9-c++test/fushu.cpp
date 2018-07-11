#include <iostream>
using namespace std;

class fushu{
	double real;
	double image;
public:
	fushu(double real = 0,double image = 0)
	{
		this->real = real;
		this->image = image;
	}
	fushu operator*(fushu T)
	{
		fushu ret = *this;
		ret.real = this->real*T.real - this->image*T.image;
		ret.image = this->real*T.image + this->image*T.real;
		cout << ret.real << " " << ret.image << endl;
		return ret;
	}
};


int main(int argc, const char *argv[])
{
	fushu fs(8,7);
	fushu fh(6,5);
	fushu ret = fs * fh;
	return 0;
}
