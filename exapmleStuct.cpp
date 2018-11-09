#include <iostream>
#include <string>

using namespace std;

struct part
{
	int numOfParts;
	float cost;
	float total;
};	


int main()
{

	part Hammer;
	Hammer.numOfParts = 2;
	Hammer.cost = 7.00;
	cout << "Number of parts " << Hammer.numOfParts << endl;

	return 0;
}
