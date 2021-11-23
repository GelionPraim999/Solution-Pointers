#include<iostream>
using namespace std;
void main()
//#defain POITERS_BASICS
//#defain POINTER_AND_ARRAYS 

{
	setlocale(LC_ALL, " ru");
#ifdef POITERS_BASICS
int a = 2;
int* pa = &a;
cout << a << endl; // ¬ывод переменной 'a' вывод на экран
cout << &a << endl; // ѕолучение адреса переменной "a" пр€мо при выводе
cout << pa << endl; // ¬ывод адреса переменной "a" хран€щегос€ в указателе ра
cout << *pa << endl;//азыменовател€ ра, и получение значени€ по адресу в этом указателе

int* pb;
int b = 3;
*pb = &b;
#endif // POITERS_BASICS
const int n = 5;
int arr[n] = { 3,5,8,13,21 };
cout << *arr << endl;
for (int i=0;i<n;i++)
{
	cout << *arr + i << "\t";
}

}