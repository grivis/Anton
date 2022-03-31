
#include<iostream>
#include<vector>
using namespace std;
#define DIM 3


int main(){

	int matrix[][DIM] = {{2, 7, 60}, {9, 5, 1}, {4, 3, 8}};

	int  total = 0;

	vector<int> allsums;

	//keep all sums; for rows, for columns, for both diagonals


		//print three sums for three rows

	for(int i = 0; i < DIM; i++)
	{	
		total = 0;
		for(int j = 0; j < DIM; j++)
			total += matrix[i][j];
		allsums.push_back(total);
	}
	

	//print three sums for three columns

	for(int i = 0; i < DIM; i++)
	{	
		total = 0;
		for(int j = 0; j < DIM; j++)
			total += matrix[j][i];
		allsums.push_back(total);
	}
	
	


	//total for the main diagonal
	total = 0;
	for(int i = 0; i < DIM; i++)
	{	
		total += matrix[i][i];
	}

	allsums.push_back(total);

	
	//i = j


	//now the counter diagonal

	total = 0;
	for(int i = 0; i < DIM; i++)
	{	
		total += matrix[i][DIM-1-i];
	}

	allsums.push_back(total);


	//[0][2] [1][1] [2][0]

	// i + j = const = DIM-1

	for(int i = 0; i < allsums.size(); i++)
		cout << allsums[i] << " ";
	cout << endl;


	//Are they all equal?
	bool ismagic = true;
	for(int i = 0; i < allsums.size(); i++)
	{
		if(allsums[0]!=allsums[i])
		{
			ismagic = false;
			break;
		}

	}

	cout << ((ismagic==true)?"Magic square":"Not magic square") << endl;

	return 0;
}