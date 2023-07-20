#include <iostream>
#include <cstdlib>
#include <ctime>


int main () {
	setlocale(LC_ALL, "Russian");
		int n, m;

		//Задача 1. Сортировка первых N элементов

		/*std::cout << "Задача 1.\nИзначальный массив:\n\n";
		const int size1 = 10;
		int arr1[size1]{};
		
		srand(time(NULL));
		for (int i = 0; i < size1; i++)
		{
			arr1[i] = rand() % 10 + 1;
			std::cout << arr1[i] << ' ';
		}
		std::cout << std::endl;

		std::cout << "\nВведите кол-во элементов для сортировки -> ";
		std::cin >> n;
		while (n < 2 || n > size1)
		{
			std::cout << "Ошибка ввода, повторите ввод!";
			std::cin >> n;
		}

		//Пузырьковая сортировка
		for (int i = n - 1; i >0; i--)
			for (int j = 0; j < i; j++)
				if (arr1[j] > arr1[j + 1])
					std::swap (arr1[j], arr1[j + 1]);

		std::cout << "\nИтоговый массив:\n\n";
		for (int i = 0; i < size1; i++)
		{
			std::cout << arr1[i] << ' ';
		}
		std::cout << "\n\n";*/

		//Задача 2. Температура в январе

		/*std::cout << "Задача 2.\nТемпература в январе:\n\n";

		const int january_days = 31;
		int january_temperature[january_days]{};

		for (int day_number = 0; day_number < january_days; day_number++)
		{
			january_temperature[day_number] = rand() % (-5 + 1 - (- 30)) + (- 30);
			std::cout << january_temperature[day_number] << ", ";
		}
		std::cout << "\b\b.\n\nВведите число -> ";
		std::cin >> n;

		int sum = 0; //сумма температуры января
		int counter = 0; //для подсчета температур < n;
		for (int day_number = 0; day_number < january_days; day_number++)
		{
			sum += january_temperature[day_number];
			if (january_temperature[day_number] < n)
			counter++;
		}
		std::cout << "Средняя температура в январе: " << sum / double (january_days) << ".\n";
		std::cout << "Дней в январе с температурой менее " << n << ": " << counter << ".\n\n";*/

		//Задача 3. Вхождение в диапазон

		std::cout << "\nЗадача 3.\nВведите начало диапазона -> ";
		std::cin >> n;
		std::cout << "Введите конец диапазона -> ";
		std::cin >> m;

		const int size3 = 20;
		int arr3[size3]{};

		std::cout << "Итог:\n";
		srand(time(NULL));
		for (int i = 0; i < size3; i++)
		{
			arr3[i] = rand() % 100;
			//if (arr3[i] >= n && arr3[i] <= m)
				//std::cout << i + 1 << ". " << arr3[i] << "!\n";
			//else std::cout << i + 1 << ". " << arr3[i] << "\n";
			std::cout << i + 1 << ". " << arr3[i] << (arr3[i] >= n && arr3[i] <= m ? "!" : "") << "\n";
		}

		return 0;
}