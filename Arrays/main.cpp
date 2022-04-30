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
	cout << "����� ��������� �������: " << Sum(arr, n) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(arr, n) << endl;
	cout << "����������� �������� � �������: " << MinValue(arr, n) << endl;
	cout << "������������ �������� � �������: " << MaxValue(arr, n) << endl;
	int number_of_shifts;
	cout << "������� ���������� �������: "; cin >> number_of_shifts;
	ShiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	//------------------------------------------------
	const int SIZE = 8;
	int brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	cout << "����� ��������� �������: " << Sum(brr, SIZE) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(brr, SIZE) << endl;
	cout << "����������� �������� � �������: " << MinValue(brr, SIZE) << endl;
	cout << "������������ �������� � �������: " << MaxValue(brr, SIZE) << endl;
	//int number_of_shifts;
	cout << "������� ���������� �������: "; cin >> number_of_shifts;
	ShiftLeft(brr, SIZE, number_of_shifts);
	Print(brr, SIZE);
	//M����������� �������� ��������� �������:
	cout << "������� ���������� �������: "; cin >> number_of_shifts;
	ShiftRight(brr, SIZE, number_of_shifts);
	Print(brr, SIZE);
}
//���������� ������� ���������� �������:
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
//����� ������� �� �����:
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout << endl;
}
//����� ��������� �������:
int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
//������� �������������� ��������� �������:
double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
//���������� ������� ��������� ������� �����:
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

//���������� ������� ��������� ������� ������:
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
// ������������ �������� ��������� �������:
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

	//�����������  �������� ��������� �������:
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
