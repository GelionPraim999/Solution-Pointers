#include<iostream>
using namespace std;

void main()

{
	setlocale(LC_ALL, "ru");


    const int N = 10;
    int mas[N];

    srand(time(NULL));

    /*�������������� ������ ���������� ������� �� 0 �� 50*/
    for (int i = 0; i < N; i++)
        mas[i] = rand() % 50;

    /*������� ������*/
    cout << "����� �������: ";
    for (int i = 0; i < N; i++)
        cout << mas[i] << " ";

    /*���������� ���-�� ������ � �������� ��-�� ��� �������� ��������*/
    int even = 0, odd = 0;
    for (int i = 0; i < N; i++)
    {
        if ((mas[i] % 2) == 0)
            ++even;
        else
            ++odd;
    }

    /*��������� ������� ������� � ��������� ���������� ��������� �������*/
    int* mas_even = new int[even], even1 = even;    //�������� ������ ��� ����-� ������             
    int* mas_odd = new int[odd], odd1 = odd;        //�������� ������ ��� ����-� ��������

    for (int i = N - 1; i >= 0; --i)
    {
        if ((mas[i] % 2) == 0)
            mas_even[--even1] = mas[i];     //��������� ����-� ������
        else
            mas_odd[--odd1] = mas[i];           //��������� ����-� ��������
    }

    cout << "\n\n ������ �������: ";       //������� ����-� ������
    for (int i = 0; i < even; i++)
        cout << mas_even[i] << " ";

    cout << "\n �������� �������: ";      //������� ����-� ��������
    for (int i = 0; i < odd; i++)
        cout << mas_odd[i] << " ";
   
    delete[]mas_even;                      //����������� ������
    delete[]mas_odd;
    cout << "\n\n";
    cout << endl;
}
