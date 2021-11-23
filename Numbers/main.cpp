#include<iostream>
using namespace std;

void main()

{
	setlocale(LC_ALL, "ru");


    const int N = 10;
    int mas[N];

    srand(time(NULL));

    /*инициализируем массив случайными чсилами от 0 до 50*/
    for (int i = 0; i < N; i++)
        mas[i] = rand() % 50;

    /*выводим массив*/
    cout << "Вывод массива: ";
    for (int i = 0; i < N; i++)
        cout << mas[i] << " ";

    /*определяем кол-во четных и нечетных эл-ов для создания массивов*/
    int even = 0, odd = 0;
    for (int i = 0; i < N; i++)
    {
        if ((mas[i] % 2) == 0)
            ++even;
        else
            ++odd;
    }

    /*заполняем массивы четными и нечетными элементами исходного массива*/
    int* mas_even = new int[even], even1 = even;    //выделяем память под масс-в четных             
    int* mas_odd = new int[odd], odd1 = odd;        //выделяем память под масс-в нечетных

    for (int i = N - 1; i >= 0; --i)
    {
        if ((mas[i] % 2) == 0)
            mas_even[--even1] = mas[i];     //заполняем масс-в четных
        else
            mas_odd[--odd1] = mas[i];           //заполняем масс-в нечетных
    }

    cout << "\n\n Четные массивы: ";       //выводим масс-в четных
    for (int i = 0; i < even; i++)
        cout << mas_even[i] << " ";

    cout << "\n Нечетные массивы: ";      //выводим масс-в нечетных
    for (int i = 0; i < odd; i++)
        cout << mas_odd[i] << " ";
   
    delete[]mas_even;                      //освобождаем память
    delete[]mas_odd;
    cout << "\n\n";
    cout << endl;
}
