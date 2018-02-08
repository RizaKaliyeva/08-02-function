#include <stdio.h>
#include <iostream>
#include <locale.h>
#include "Header.h"
#include <time.h>

using namespace std;

int i, j;

void main(int args, char *argv[])
{
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");

	if (args != 0)
	{
		cout << endl;
		for (int i = 0; i < args; i++)
		{
			cout << argv[i];
		}
		cout << endl;
	}
	short int z;
	while (true)
	{
		cout << "Kakoe zadanie?" << endl;
		cin >> z;
		switch (z)
		{
		case 1:
		{
			/*1.	Получить все четырехзначные счастливые номера.Счастливым называется номер, у которого сумма первых двух
				цифр номера равна сумме последних двух цифр.Использовать функцию для расчета суммы цифр двухзначного числа*/
			char mas[4];
			int h;
			cout << "Vvedite 4-oe chislo?!" << endl;
			cin >> mas;

			h = happy(mas);
			if (h == 1)
				cout << "Happy" << endl;
			else
				cout << "Unhappy" << endl;
		}
		break;
		case 2:
		{
			//2.	Отсортировать по убыванию заданный массив чисел, используя функцию сортировки.
			int mas[10];
			create(mas, 10,15,50,positive);
			print_arr(mas, 10);
			sort(mas, 10);
			cout << "Otsort massiv" << endl;
			print_arr(mas, 10);
		}
		break;
		case 3:
		{
			//3.	Отсортировать по возрастанию заданный массив чисел, исключив отрицательные числа.Использовать функцию сортировки.
			int mas[10];
			create(mas, 10, 20, 80, negative);
			print_arr(mas, 10);
			sort(mas, 10);
			cout << "Otsort massiv" << endl;
			for (i = 0; i < 10; i++)
			{
				if (mas[i] > 0)
					cout << mas[i] << endl;
			}
		}
		break;
		case 4:
		{
			/*4.	Задан одномерный массив из 16 элементов.Сформировать двухмерный массив 4×4, 
				используя функцию преобразования любого одномерного массива в двухмерный массив размерностью n×n с добавлением нулевых элементов.*/
			int mas[16], mas1[4][4];
			create(mas, 16, 10, 80, positive);
			print_arr(mas, 16);
			arr_d(mas, mas1, 16);
			for (i = 0; i < 4; i++)
			{
				for (j = 0; j < 4; j++)
				{
					cout << mas1[i][j] << "\t";
				}
				cout << endl;
			}
		}
		break;
		case 5:
		{
			/*5.	С помощью функции random(n) сгенерировать 3 массива чисел от 0 до 50 и определить сумму элементов каждого массива.
				Для определения суммы использовать функцию(использовать метод не ограниченного количества оргуметов)*/
			int mas[5];
			create(mas, 5, 0, 50, positive);

		}
		break;
		}

	}



	system("pause");
}