#include<iostream>
#include<vector>
using namespace std;

// the functions returns a 2D vector
// of size n X n and all elements
// equals to x
vector<vector<int>> Return2DVector(int n, int x){
	vector<vector<int>> v;
	
	for(int i=0;i<n;++i){
		
		v.push_back(vector<int>());
		for(int j=0;j<n;++j){
			v[i].push_back(x);
		}	
		
	}
	
	return v;
}

int main()
{
	vector<vector<int>> v;
	int n,x;
	
	n = 4;
	x = 2;
	v = Return2DVector(n,x);
	
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			cout<<v[i][j]<<' ';
		}	
		cout<<endl;
	}
	
}

//перепишите пример, так чтобы заполненный двухмерный вектор возвращался путем передачи по ссылке
//no return!!


//Напишите функцию, которая принимает массив целых чисел, размер и коэффициент
// Перемножает все элементы массива на этот коэффициент

//Напишите функцию нахождения корней квадратного уравнения...
// https://ru.wikipedia.org/wiki/%D0%9A%D0%B2%D0%B0%D0%B4%D1%80%D0%B0%D1%82%D0%BD%D0%BE%D0%B5_%D1%83%D1%80%D0%B0%D0%B2%D0%BD%D0%B5%D0%BD%D0%B8%D0%B5


//Напишите функцию, которяа возвращает вектор всех простых чисел в заданном диапазоне
