#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void mas(int* a, int size)
{
	for (int i = 0; i < size; i++)
	{
		a[i] = -50 + rand() % (101);
		cout << a[i] << " ";
	}
	cout << endl;
}
void count(int* a, int size)
{
	int C = 0;
	for (int i = 0; i < size; i++) {
		if (a[i] > 0)
		{
			C++;
		}
	}
	cout << endl;
	cout << "Count = " << C << endl;
}
void sum(int* a, const int size) 
{
	int S = 0;
	for (int i = size - 1; i >= 0; i--) {
		if (a[i] != 0)
		{
			S += a[i];
		}
		else break;
	}
	cout << endl;
	cout << "Sum = " << S << endl;
	cout << endl;
}
void Sort(int* a, const int size)
{
	for (int i = 1; i < size; i++)
	{
		if (a[i] >= -1 && a[i] <= 1) {
			int tmp = a[i];
			int j = 0;
			while (tmp > a[j])
				j++;
			for (int k = i - 1; k >= j; k--)
				a[k + 1] = a[k];
			a[j] = tmp;
		}
	}
}
void mass(int* a, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
int main() {
	srand((unsigned)time(NULL));
	const int n = 100;
	int a[n];
	int userSize;
	cin >> userSize;
	mas(a, userSize);
	count(a, userSize);
	sum(a, userSize);
	Sort(a, userSize);
	mass(a, userSize);
	return 0;
}