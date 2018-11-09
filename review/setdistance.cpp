#include <iostream>

using namespace std;

class distances
{
	private:
		int feet;
		float inches;
	public:
		void setDistance(int f, float i)
		{
			feet = f;
			inches = i;
		}
		void getDistance()
		{
			cout << "Please input feet : ";
			cin >> feet;
			cout << "Please input inches : ";
			cin >> inches;
		}
		void showDistance()
		{
			cout << "The distance is " << feet << " feet " << inches << " inches" << endl;
		}
		void addDistance(distances d1, distances d2);

};
void distances::addDistance(distances d1, distances d2)
{
	inches = d1.inches + d2.inches;
	feet = d1.feet + d2.feet;

	if(inches > 11)
	{
		inches = inches - 12;
		feet++;
	}
}

int main()
{
	distances d1, d2, d3;
	d1.setDistance(10, 2);
	d2.getDistance();

	cout << "d1 ";
	d1.showDistance();
	cout << "d2 ";
	d2.showDistance();
	d3.addDistance(d1, d2);
	cout << "d3 ";
	d3.showDistance();


	return 0;
}