//Arrays
#include<iostream>
using namespace std;

#define tab "\t"
#define delimiter "\n----------------------------------------------------------------------\n"

const int ROWS = 3;
const int COLS = 5;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(char arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS,const int COLS);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(char arr[], const int n);
void Print(int arr[ROWS][COLS], const int ROWS,const int COLS);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);

double Avg (int arr[], const int n);
double Avg (double arr[], const int n);

void ShiftLeft (int arr[], const int n, const int number_of_shifts);
void ShiftLeft (double arr[], const int n, const int number_of_shifts);

void ShiftRight (int arr[], const int n, const int number_of_shifts);
void ShiftRight (double arr[], const int n, const int number_of_shifts);

int MaxValue(int arr[], const int n);
int MinValue(int arr[], const int n);

void Sort(int arr[], const int n);

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
	
	cout << delimiter << endl;

	const int D_SIZE = 8;
	double d_arr[D_SIZE];
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << "Сумма элементов массива: " << Sum(d_arr, D_SIZE) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(d_arr, D_SIZE) << endl;
	Sort(arr, n);
	Print(arr, n);
	
	//int number_of_shifts;
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	ShiftLeft(d_arr, D_SIZE, number_of_shifts);
	Print(d_arr, D_SIZE);
	
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	ShiftRight(d_arr, D_SIZE, number_of_shifts);
	Print(d_arr, D_SIZE);
	
	cout << delimiter << endl;
	const int C_SIZE = 7;
	char c_arr[C_SIZE];
	FillRand(c_arr, C_SIZE);
	Print(c_arr, C_SIZE);

	cout << delimiter << endl;

	
	int arr2[ROWS][COLS]; 
	FillRand(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);
	
}



//Заполнение массива случайными числами:
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = double(rand() % 10000)/100;
	}
}
void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
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
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout << endl;
}
void Print(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout << endl;
}
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
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
double Sum(double arr[], const int n)
{
	double sum = 0;
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
double Avg(double arr[], const int n)
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
void ShiftLeft(double arr[], const int n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++) // счестик 'i' выбирает элемент, в который нужно поместить минимальное значение
	{
		for (int j = i+1; j < n; j++)// счестик 'j' перебирает остальные элементы массива
		{
			//arr[i] - выбранный элемент
			//arr[j] - перебираемый элемент
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
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
void ShiftRight(double arr[], const int n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr[n-1];
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
