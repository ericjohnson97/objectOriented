// counter.cpp
// this program uses classes constructors to keep track of counting

#include <iostream>

using namespace std;

class counter
{
	private:
		int count;
	public:
		counter() : count(0)
		{
		}
		void operator ++ ()
		{
			count++;
		}
		int showCount()
		{
			return count;
		}
};

int main()
{
	counter c1, c2;

	cout << "cout 1: " << c1.showCount() << endl;
	cout << "cout 2: " << c2.showCount() << endl;

	++c1;
	++c2;
	++c2;


	cout << "cout 1: " << c1.showCount() << endl;
	cout << "cout 2: " << c2.showCount() << endl;


	return 0;
}







