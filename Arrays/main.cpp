//Arrays
#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);
int Sum(int arr[], const int n);
double Avg (int arr[], const int n);
void ShiftLeft (int arr[], const int n, const int number_of_shifts);
void ShiftRight (int arr[], const int n, const int number_of_shifts);
int MaxValue(int arr[], const int n);
int MinValue(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве: " << MinValue(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << MaxValue(arr, n) << endl;
	int number_of_shifts;
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	ShiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	//------------------------------------------------
	const int SIZE = 8;
	int brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	cout << "Сумма элементов массива: " << Sum(brr, SIZE) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(brr, SIZE) << endl;
	cout << "Минимальное значение в массиве: " << MinValue(brr, SIZE) << endl;
	cout << "Максимальное значение в массиве: " << MaxValue(brr, SIZE) << endl;
	//int number_of_shifts;
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	ShiftLeft(brr, SIZE, number_of_shifts);
	Print(brr, SIZE);
	//Mаксимальное значение элементов массива:
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	ShiftRight(brr, SIZE, number_of_shifts);
	Print(brr, SIZE);
}
//Заполнение массива случайными числами:
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
//Вывод массива на экран:
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout << endl;
}
//Сумма элементов массива:
int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
//Среднее арифметическое элементов массива:
double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
//Количество сдвигов элементов массива влево:
void ShiftLeft(int arr[], const int n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}

//Количество сдвигов элементов массива вправо:
void ShiftRight(int arr[], const int n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[n-1];
		for (int i = n-1; i > 0; i--)
		{
			arr[i] = arr[i-1];
		}
		arr[0] = buffer;
	}
}
// Максимальное значение элементов массива:
int MaxValue(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; ++i)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return  max;
}

	//Минимальное  значение элементов массива:
	int MinValue(int arr[], const int n)
	{
		int min = arr[0];
		for (int i = 0; i < n; ++i)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
		return  min;

}
