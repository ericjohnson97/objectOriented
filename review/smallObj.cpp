#include <iostream>

using namespace std;

class smallObj
{
	private:
		int somedata;
	public:
		void setData(int d)
		{
			somedata = d;
		}
		void showdata()
		{
			cout << "Your data is " << somedata << endl;
		}
};


int main()
{

	smallObj s1, s2;

	s1.setData(1222);
	s2.setData(1333);

	s1.showdata();
	s2.showdata();

	return 0;
}
