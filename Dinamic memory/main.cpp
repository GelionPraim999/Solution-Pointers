#include<iostream>
using namespace std;
void FillRand(int arr[], const int n);
void Print(int* arr, const int n);
void main()
{
	setlocale(LC_ALL, "");

	int n;// Размер массива
		cout << "Введите размер массива"; cin >> n;
	// объявление динамического массива
		int* arr = new int[n];
		FillRand(arr, n);
		Print(arr, n);

		// Обращение к элементам динамического массива
		for (int i = 0; i < n; i++)
		{
			// Через оператор разыменовывания : 
			*(arr + i) = rand() % 100;
		}
		for (int i = 0; i < n; i++)
		{
           // через оперптор индексирования
			cout << arr[i] << "\t";
			// оператор индексирования возвращает значения по индексу
		}
		cout << endl;
}
void FillRand(int arr[], const int n)
{
	// Обращение к элементам динамического массива
	for (int i = 0; i < n; i++)
	{
		// Через оператор разыменовывания : 
		*(arr + i) = rand() % 100;
	}
}
	void Print(int* arr, const int n)
	{
		for (int i = 0; i < n; i++)
		{
			// через оперптор индексирования
			cout << arr[i] << "\t";
			// оператор индексирования возвращает значения по индексу
			cout << endl;
		}

	}
