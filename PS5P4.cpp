#include <iostream>
using namespace std;

int main()
{
	//define variables
	float sal;
	float trate, tax, trateP;

	//input
	cout << "enter the users annual salary";
		cin >> sal;


	//process

	//determine the tax rate based on salary
		if (sal >= 100000)
			trate = 0.4;
		else if (sal >= 50000) //50k to 100k
		trate = 0.35;
		else //lower than 50k
		trate = 0.25;

		//compute the tax money owned
		tax = trate * sal;

		//convert trate into a whole percent

		trateP = 100 * trate;

		//print results

	cout << "users annual salary is: $" << sal << endl;
	cout << "based on the value above, tax rate is set at: %" << trateP << endl;
	cout << "the tax money owned based on tax rate is: $" << tax << endl;
	return 0;
}
