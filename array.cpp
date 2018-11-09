#include <iostream>

using namespace std;

void arrayPass(int arrFunc[][1])
{
	for (int i=0; i++;i<=1 )
	{
		for( int j=0; j++; j<=1)
		{
			cout << arrFunc[i][j];
		}
		cout << endl;
	}
	cout <<"passed"<< endl;
}
int main()
{
	int arr[1][1];
	arr[0][0] = 2;
	arr[0][1] = 2;
	arr[1][0] = 2;
	arr[1][1] = 2;
	cout << arr[1][1] << endl;
	return 0;
	// arrayPass(arr);
	// // arr[0] = 233;

	// // cout << "arr[0] :" <<  arr[0] << endl;

	// return 0;
}


