#include <iostream>
//#include <iomanip>
//#include <windows.h>
#include <vector>
using namespace std;

int main()
{

	vector <int> myvec1, myvec2;


	myvec1.assign(5, 0);
	myvec2.assign(5, 1);

	myvec1.swap(myvec2);

	for(int i=0; i<myvec1.size(); i++)
		cout << myvec1[i] << " ";

	cout <<endl;

	for(int i=0; i<myvec2.size(); i++)
		cout << myvec2[i] << " ";



	cout << endl;


	return 0;
}