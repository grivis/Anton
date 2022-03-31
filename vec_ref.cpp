// C++ program to demonstrate how vectors
// can be passed by reference.
//#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

// The vect is passed by reference and changes
// made here reflect in main()
void func(vector<int>& vect) { vect.push_back(30); }

int main()
{
	vector<int> myvect;
	myvect.push_back(10);
	myvect.push_back(20);

	func(myvect);

	for (int i = 0; i < myvect.size(); i++)
		cout << myvect[i] << " ";

	return 0;
}
