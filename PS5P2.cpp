#include <iostream>
using namespace std;

int main()
{
	//define variables
	float lbs;
	float ppound, total;


	//input
	cout << "enter the quantity of the item in lbs";
		cin >> lbs;
	//process

	//determine the price per pound
		if (lbs >= 100) //100 lbs or greater
			ppound = 0.10;
		else if (lbs >= 50) // between 50 and 100 lbs
			ppound = 0.25;
		else // below 50 lbs
			ppound = 0.50;
		//compute total price
		total = ppound * lbs;

	//print results
		cout << "the price per pound given by the quantiy is: $ " << ppound << endl;
		cout << "based on the quantity, the total price of all apples is: $" << total << endl;
	return 0;
}
