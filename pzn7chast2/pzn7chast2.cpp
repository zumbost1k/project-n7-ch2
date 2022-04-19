//Индивидуальное задание :
//Дан одномерный массив натуральных чисел.
// Определить количество элементов массива, сумма цифр которых больше 7.
//Найти максимальную цифру максимального элемента массива.

#include <iostream>


	


int provsumm(int a)
{
	int sum = 0;
	while (a != 0)
	{
		sum += a % 10;
		a /= 10;
	}
	return sum;

}

int provchisl(int a)
{
	int chislo = 0;
	int maxchiclo = chislo;
	while(a!=0)
	{
		chislo = a % 10;
		if (chislo > maxchiclo)
		{
			maxchiclo = chislo;

		}
		a = a / 10;

	}

	return maxchiclo;
}


using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int n, j;
	int massiv[1000];

	cout << "введите размерность массива" << endl;
	cin >> n;
	for (j = 0;j < n;j++)
	{
		cout << "введите целое положитильное число в массив:" << endl;
		cin >> massiv[j];

	}


	int kolvo = 0;
	for (j = 0;j < n;j++)
	{
	
		if (provsumm(massiv[j])>7)
		{
			kolvo++;
		}

	}
	cout << "количество элементов массива, сумма цифр которых больше 7 равна:" <<kolvo << endl;


	int  max = -99;
	for (j = 0;j < n;j++)
	{
		if (massiv[j])
		{
			max = massiv[j];
		}

	}


	int maxim = massiv[0];

	for (int i = 0;i < n;i++)
	{
		if (massiv[i] > maxim)
		{
			maxim = massiv[i];
		}

	}
	cout << "максимальное число в массиве: " << maxim << endl;
	cout << "максимальная цифра максимального элемента массива: " << provchisl(maxim) << endl;



}

