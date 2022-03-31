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

	for (int j=0; j<myvec.size(); j++)
		cout << myvec[j] << " ";


	cout << endl;


	return 0;
}