#include <iostream>
//#include <iomanip>
//#include <windows.h>
#include <vector>
using namespace std;

int main()
{
	//setlocale(0, "");

	int first[] = { 1, 2, 3, 4, 5, 6 };
	int second[] = { 5, 6, 7, 8, 9, 10 };

	vector <int> common;

	for(int i = 0; i < sizeof(first)/sizeof(int); i++)
		for(int j = 0; j < sizeof(second)/sizeof(int); j++)
			if(first[i]==second[j])
				common.push_back(first[i]);
			
	for (int i = 0; i < common.size(); i++)
		cout << common[i] << " ";	

	return 0;
}