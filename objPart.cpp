// objPart.cpp
// program uses a class to format data on wiget parts

#include <iostream>

using namespace std;

class part
{
private:
	int modelNumber;
	int partNumber;
	float cost;
public:
	void setPart(int mn, int pn, float c)
	{
		modelNumber =  mn;
		partNumber = pn;
		cost = c;
	}
	void showPart()
	{
		cout << "The model number is " << modelNumber << endl;
		cout << "The part number is " << partNumber << endl;
		cout << "The cost is " << cost << endl;
	}
	
};


int main()
{

	part wiget;
	wiget.setPart(1111, 1200, 7.00f);
	wiget.showPart();

	return 0;
}

