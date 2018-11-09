// distance.cpp
// uses classes to hold measured data

#include <iostream>

using namespace std;

class Distance
{
	private:
		int feet;
		int inches;
	public:
		void setdist(int f, int i)
		{
			feet = f;
			inches = i;
		}
		void getdist()
		{
			cout << "\nEnter feet: "; cin >> feet;
			cout << "\nEnter inches: "; cin >> inches;
		}
		void showdist()
		{
			cout << "feet: " << feet << " inches: " << inches << endl;
		}
};

int main()
{
	Distance dist1, dist2;

	dist1.setdist(1, 3);
	dist2.getdist();

	dist1.showdist();
	dist2.showdist();

	return 0;
}

