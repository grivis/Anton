#include <iostream>
//#include <iomanip>
//#include <windows.h>
#include <vector>
using namespace std;

int main()
{

	vector <int> myvec;


	for (int i = 0; i < 10; i++)
		myvec.insert(myvec.end(), i);
	//myvec.end() - pointer to vector end
	//myvec.insert(myvec.end(), i) == myvec.push_back(i)

	for (auto j=myvec.begin(); j<myvec.end(); j++)
		//cout << "(" << *j << ":" << j <<")" << " ";
		printf("(%d : %p)", *j, j);


	cout << endl;


	return 0;
}