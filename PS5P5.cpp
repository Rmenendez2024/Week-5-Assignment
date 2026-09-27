#include <iostream>
using namespace std;

int main()
{
	//define variables
	float wght;
	float ppp, total;


	//input
	cout << "enter the weight of the material";
	cin >> wght;
	//process

	//determine the price per pound
	if (wght >= 100) //100 lbs or greater
		ppp = 0.50;
	else if (wght >= 30) // between 30 and 100 lbs
		ppp = 0.25;
	else if (wght >= 20) // between 20 and 30 lbs
		ppp = 0.20;
	else // below 20 lbs
		ppp = 0.10;
		//compute total price
		total = ppp * wght;

	//print results
		cout << "the weight of the material given in lbs is:" << wght << endl;
		cout << "the price per pound given by the weight is: $" << ppp << endl;
		cout << "based on the quantity, the total price for the materials: $" << total << endl;
	return 0;
}
