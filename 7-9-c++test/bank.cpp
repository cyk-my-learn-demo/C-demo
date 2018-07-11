#include <iostream>
#include <cstring>
using namespace std;

class bank
{
	string name;
	char account[20];
	float money;
public:
	bank(const string &name,const char *account,float money = 0.0)
	{
		this->name = name;
		strcpy(this->account,account);
		this->money = money;
	}
	void show()
	{
		cout << name << endl;
		cout << account << endl;
		cout << money <<  endl;
	}
	void moneydown(float money)
	{
		this->money = this->money - money;
		cout << this->money << endl;
	}
	void moneyup(float money)
	{
		this->money = this->money + money;
		cout << this->money << endl;
	}
};

int main(int argc, const char *argv[])
{
	bank bk("cww","haha233",10086.68);
	bk.show();
	bk.moneyup(86.68);
	bk.moneydown(86.68);
	return 0;
}
