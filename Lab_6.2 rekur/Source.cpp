#include <iostream>
#include <iomanip>
#include <time.h>
#include <Windows.h>

using namespace std;

int Create(int* a, const int size, const int Low, const int High, int i)
{
	a[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)
		Create(a, size, Low, High, i + 1);
	return 1;
}

void Print(int* a, const int size, int i)
{
	cout << setw(4) << a[i];
	if (i < size - 1)
		Print(a, size, i + 1);
	else
		cout << endl;
}

int Min(int* a, const int size, int i, int min)
{
	if (a[i] < min)
		min = a[i];
	if (i < size - 1)
		return Min(a, size, i + 1, min);
	else
		return min;
}

int Find(int* a, const int size, int i)
{
	if (a[i] == Min(a, 20, 1, a[0]))
		return i;
	if (i < size - 1)
		return Find(a, size, i + 1);
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand((unsigned)time(NULL));

	const int n = 20;
	int Low, High;
	int a[n];
	cout << "Low = "; cin >> Low;
	cout << "High = "; cin >> High;

	Create(a, n, Low, High, 0);
	Print(a, n, 0);
	cout << "індекс найменшого непарного елемента = " << Find(a, n, 0);

	return 0;
}
	