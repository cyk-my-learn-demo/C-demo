#include<iostream>
using namespace std;

float MG(float distance,float oil)
{
	return (oil * 4.546092)/(distance * 1.609344) * 100;
}

float KM(float distance,float oil)
{
	return oil/distance * 100;
}



int main(int argc, const char *argv[])
{
	float distance;
	float oil;
	int flag;

	cout << "mile/gallon-1 or km/liter-2" <<endl;
	cin >> flag;
	cin >> distance;
	cin >> oil;
	if(flag == 1)
	{
		cout << MG(distance,oil) << endl;
	}
	else if(flag == 2)
	{
		cout << KM(distance,oil) << endl;
	}
	return 0;
}
