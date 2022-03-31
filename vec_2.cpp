
#include<iostream>
#include<vector>

using namespace std;


int main(){

	// make a vector of all divisors (factors) of a number
	// number = 18; (1, 2, 3, 6, 9, 18)
	//number = 13; (1, 13)

	vector<int> factors;
	//vector of integers!!!
	int number, elem;

	cout << "Input a number ";
	cin >> number;
	cout << endl;
    
    for(int i = 1; i <= number; i++)
    {
    	if(number%i==0)
    	factors.push_back(i);
    }

	
    for(int j = 0; j < factors.size(); j++)
    	cout << factors[j] << " ";



    cout << endl;

    int size = factors.size();
    cout << "Vector length " << factors.size() << endl;

    for(int j = 0; j < size; j++){
    	factors.pop_back();
    	//removes the last element
    }

    cout << endl;

    cout << "Vector length " << factors.size() << endl;




	return 0;
}


/*
 Напишите программу, которая берет два массива

 и создает вектор общих элементов

 int first[] = {1, 2, 3, 4, 5, 6};
 int second[] = {5, 6, 7, 8, 9, 10};

 vector <int> common;


 Программа создает вектор элементов. уникальных для первого массива

*/