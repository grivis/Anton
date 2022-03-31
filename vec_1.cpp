
#include<iostream>
#include<vector>

using namespace std;


int main(){

	vector<int> vec;
	//vector of integers!!!

	cout <<"Vector length " << vec.size() << endl;
	cout << "Size of vector " << sizeof(vec) << endl;

	vec.assign(10, 0);
	// fill with 10 zeros;

	cout <<"Vector length " << vec.size() << endl;
	cout << "Size of vector " << sizeof(vec) << endl;

	for (int i=0; i<10; i++)
		cout << vec[i] << " ";

	cout << endl;

	for (int i=1; i<6; i++)
		vec.push_back(i); //append element at the end


	for (int i=0; i<15; i++)
		cout << vec[i] << " ";

	cout << endl;

	cout <<"Vector length " << vec.size() << endl;
	cout << "Size of vector " << sizeof(vec) << endl;



	return 0;
}