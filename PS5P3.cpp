#include <iostream>
using namespace std;
int main()
{
	//define variables
	float hrs;
	string jcode, lname;
	float prate, pay;



	//input
	cout << "enter the last name of the user";
		cin >> lname;
	cout << "enter the hours worked this week";
		cin >> hrs;
	cout << "enter the job code given by the user (eg.A E or J)";
		cin >> jcode;
	//process

	//determine the payrate based on the jcode
	if (jcode == "A")
		prate = 15.00;
	else if (jcode == "E")
		prate = 25.00;
	else if (jcode == "J")
		prate = 20.00;

		//compute pay based on hours worked

		pay = prate * hrs;

		//print results

	cout << "users last name is" << lname << endl;
	cout << "hours worked this week:" << hrs << endl;
	cout << "pay rate based on job code provided: $" << prate << endl;
	cout << "total pay for the week: $" << pay << endl;
	return 0;
}
