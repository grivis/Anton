
#include<iostream>
#include<vector>
using namespace std;
#define DIM 3


int main(){

	int matrix[][DIM] = {{2, 7, 60}, {9, 5, 1}, {4, 3, 8}};

	int  total = 0;


	//total of the entire matrix

	for(int i = 0; i < DIM; i++)
	{
		for(int j = 0; j < DIM; j++)
			total += matrix[i][j];
	}
	cout << total << endl;

	//print three sums for three rows

	for(int i = 0; i < DIM; i++)
	{	
		total = 0;
		for(int j = 0; j < DIM; j++)
			total += matrix[i][j];
		cout << total << " ";
	}
	
	cout << endl;

	//print three sums for three columns

	for(int i = 0; i < DIM; i++)
	{	
		total = 0;
		for(int j = 0; j < DIM; j++)
			total += matrix[j][i];
		cout << total << " ";
	}
	
	cout << endl;

	return 0;
}