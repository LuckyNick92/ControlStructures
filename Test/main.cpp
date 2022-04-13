#include <iostream>
using namespace std;

//#define MASSIV
//#define PORYADOK
//#define OBRATNIY
//#define SUMMA
#define MINMAX


int main()
{
	setlocale(LC_ALL, "");

#ifdef MASSIV
	
	int arr[5];
	cout << "Введите элементы массива: " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout  << "[" << i + 1 << "]" << ":"; cin >> arr[i];
	}
#endif // MASSIV

#ifdef PORYADOK
	int arr[5] = {
		1,2,3,4,5
	};
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << "\t";
	}
	
#endif // PORYADOK

#ifdef OBRATNIY
	int arr[5] = {1,2,3,4,5};
	for (int i = 0; i < 5; i++)
	{
		arr[i] = 5 - i;
		cout << arr[i] << "\t";
	}

#endif // OBRATNIY

#ifdef SUMMA
	int sum = 0;
	int i = 0;
	int arr[5] = { 1,2,3,4,5 };
	for (int i = 0; i < 5; i++)
	{
		sum +=arr[i];
		
	}
	cout << sum;

#endif // SUMMA

#ifdef MINMAX
	int min = 1;
	int max = 5;
	int i = 0;
	int arr[5] = { 1,2,3,4,5 };
	for (int i=0;i<5;i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}

	for (int i = 0; i < 5; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	cout <<"Минимальное значение: "<< min << endl;
	cout <<"Максимальное значение: "<< max << endl;
	
#endif // MINMAX



}