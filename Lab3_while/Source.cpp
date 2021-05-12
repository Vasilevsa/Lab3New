#include <iostream>
#include "summ.h"
#include "summ2.h"
#include "print.h"
#include "findFirstElement.h"
#include "findFirstNegativeElement.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Ru");

	bool repeat = true;
	int num = 0, n = 0, k = 0;
	double eps = 0;

	while (repeat)
	{
		cout << "Выберите интересующий вас раздел:" << "\n"
			<< "Задания 1 - 1" "\n" << "Задания 2 - 2" << "\n" << "Задания 3 - 3" << "\n"
			<< "Задания 4 - 4" << "\n" << "Задания 5 - 5" << "\n" << "Выход - 6" << "\n";

		cin >> num;

		switch (num)
		{
		case 1:
			system("cls");
			cout << "Введите число n" << "\n";
			cin >> n;
			cout << "Искомая сумма: " << summ(n) << "\n";
			break;

		case 2:
			system("cls");
			cout << "Введите число eps" << "\n";
			cin >> eps;
			cout << "Искомая сумма: " << summ2(eps) << "\n";
			break;

		case 3:
			system("cls");
			cout << "Введите по очереди числа n и k" << "\n";		
			cin >> n >> k;
			cout << "Искомые числа: ";
			print(n, k);
			cout << "\n";
			break;

		case 4:
			system("cls");
			cout << "Введите число eps" << "\n";
			cin >> eps;
			cout << "Искомый номер элемента: " << findFirstElement(eps) << "\n";
			break;

		case 5:
			system("cls");
			cout << "Введите число eps" << "\n";
			cin >> eps;
			cout << "Искомый отрицательный номер элемента: " << findFirstNegativeElement(eps) << "\n";
			break;		

		case 6:
			system("cls");
			repeat = false;
			break;

		default:
			cout << "Ошибка при выборе номера раздела\n";
			break;
		}

		system("pause");
		system("cls");
	}

	return 0;
}