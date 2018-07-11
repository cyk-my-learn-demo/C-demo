#include <iostream>
using namespace std;

int main(int argc, const char *argv[])
{
	long int all;
	long int port;
	float sum;
	cout << "enter world's:";
	cin >> all;
	cout << "US:";
	cin >> port;
	sum = float(port)/long(all) * 100;
	cout << sum << "%" << endl;

	return 0;
}
