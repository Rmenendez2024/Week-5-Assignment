#include <iostream>
using namespace std;

int main()
{
	//define variables
	float grade;
	string lname;
	float pgrade;
	string Lgrade;



	//input
	cout << "enter the last name of the user";
	cin >> lname;
	cout << "enter the percent grade earned(eg. 0.35)";
	cin >> grade;

	//process
	//compute the grade into a percent

	pgrade = grade * 100;

	//determine the letter grade
	if (pgrade >= 90)
		Lgrade = "A";
	else if (pgrade >= 80) //80 to 89
		Lgrade = "B";
	else if (pgrade >= 70) //70 to 79
		Lgrade = "C";
	else if (pgrade >= 60) //60 to 69
		Lgrade = "D";
	else //59 or lower
		Lgrade = "F";

		//print results

	cout << "users last name is " << lname << endl;
	cout << "based on the percentage given, the users letter grade is set at: " << Lgrade << endl;
	return 0;
}
