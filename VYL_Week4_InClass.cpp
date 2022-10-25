#include <cstdio>
#include <iostream>
#include <iterator>
#include <list>
using namespace std;

int Factorial_Recursion(int);
void Factorial_Iteration();
void Display();
void Display_Multi();
void Zero_to_N_Contiguous();
void Zero_to_N_NonContiguous();
void Array_2D();

int main()
{	
	int n = 5;
	cout << "A Factorial of 5 using Recursion is: " << Factorial_Recursion(n) << endl;
	Factorial_Iteration();
	Display();
	Display_Multi();
	Zero_to_N_Contiguous();
	Zero_to_N_NonContiguous();
	Array_2D();
}


// Question 1
//-------------------------------------------------------------------------
/// Question A
int Factorial_Recursion(int i) {
	if (i >= 1) {
		return i * Factorial_Recursion(i - 1);
	}
	else
	{
		return 1;
	}
}
/// Question B
void Factorial_Iteration() {
	int tmp = 1;
	for (int i = 1; i <= 5; i++)
	{
		tmp *= i;
	}
	cout << "A Factorial of 5 using Iteration is: " << tmp << endl;
}
// Question 2
//-------------------------------------------------------------------------
/// Question A
void Display() {
	int _number, eq;
	cout << "Enter an integer: ";
	cin >> _number;
	for (int i = 1; i <= 10; i++)
	{
		eq = _number * i;
		cout << _number << " * " << i << " = " << eq << endl;
	}
}
/// Question B
void Display_Multi() {
	int _number, _eq, _range;
	cout << "Enter an integer: ";
	cin >> _number;
	cout << "Enter a range: ";
	cin >> _range;
	for (int i = 1; i <= _range; i++)
	{
		_eq = _number * i;
		cout << _number << " * " << i << " = " << _eq << endl;
	}
}
// Question 3
//-------------------------------------------------------------------------
void Zero_to_N_Contiguous() {
	int n = 5, _number = 100;
	auto* arr = new int[n];
	cout << "(Contiguous allocation : \n" << endl;
	for (int i = 0; i < n; i++)
	{
		arr[i] = _number;
		cout << "&X[" << i << "] = " << arr[i] << endl;
		_number += 4;
	}
	delete[] arr;
}
void Zero_to_N_NonContiguous() {
	int inc = 0, n = 5, _number = 100;
	list<int> number_list;
	list<int>::iterator it;
	for (int i = 0; i < n; i++) {
		number_list.push_back(_number);
		_number += 4;
	}
	cout << "Non-Contiguous allocation : \n" << endl;
	for (it = number_list.begin(); it != number_list.end(); ++it)
	{
		cout << "&X[" << inc << "] = " << *it << endl;
		inc++;
	}
}

// Question 4
//-------------------------------------------------------------------------
void Array_2D() {
	int  _number = 100;
	int row, colmn;
	cout << "Row: ";
	cin >> row;
	cout << "Colmn: ";
	cin >> colmn;
	int** arr = new int* [row];
	for (int i = 0; i < row; ++i)
	{
		arr[i] = new int[colmn];
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < colmn; j++)
		{
			arr[i][j] = _number;
			cout << "&X[" << i << "] [" << j << "] = " << _number << endl;
			_number += 4;
		}
		cout << endl;
	}
	delete[] arr;
}