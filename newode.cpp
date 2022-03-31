#include <iostream>
using namespace std;

//Напишите функцию f(int* arr, long N), которая воз-вращает все цифры пятизначного натурального числа N

void f(int* arr, long N)
{
	while (N)
	{
		*arr = N % 10;
		arr++;
		N /= 10;
	}
}
int k(long N)
{
	int kol = 0;
	while (N)
	{
		kol++;
		N /= 10;
	}
	return kol;
}
int main()
{
	setlocale(0, "");
	long N;
	int* arr;
	int kol;
	cout << "Введите число: \n";
	cin >> N;
	kol = k(N);
	arr = (int*)malloc(sizeof(int) * k(N));
	f(arr, N);
	cout << "Цифры данного числа:\n";
	//arr += kol;
	for(int i = 0; i < kol-1; i++)
	{
		cout << *arr << " ";
		arr++;
		
	}
	free(arr);

	return 0;
}