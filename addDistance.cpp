// addDistance.cpp

#include <iostream>

using namespace std;

class Distance
{
	private:
		int feet;
		float inches;
	public:
		Distance() : feet(0), inches(0)
		{}
		Distance(int f, float in) : feet(f), inches(in)
		{}
		void getdist()
		{
			cout << "\nEnter feet: "; cin >> feet;
			cout << "\nEnter inches: "; cin >> inches;
		}
		void showdist()
		{
			cout << "feet: " << feet << " inches: " << inches << endl;
		}
		void addDistance(Distance, Distance);
};

void Distance::addDistance(Distance d1, Distance d2)
{
	inches = d1.inches + d2.inches;
	feet = 0;
	if (inches >= 12 )
	{
		inches -= 12;
		feet++;
	}
	feet += d1.feet + d2.feet;
}
int main()
{
	Distance d1, d3;
	Distance d2(12, 6.25);
	d1.getdist();
	
	d3.addDistance(d1, d2);
	
	d1.showdist();
	d2.showdist();
	d3.showdist();
	return 0;
}


