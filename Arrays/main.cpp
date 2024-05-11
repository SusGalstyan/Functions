﻿#include"stdafx.h"
#include"Constants.h"

#include"FillRand.h"
#include"Print.h"
#include"Sort.h"
#include"Statistics.h"
#include"Shift.h"

void main()
{
	setlocale(LC_ALL, "");
	const int I_SIZE = 5;
	int i_arr[I_SIZE];
	FillRand(i_arr, I_SIZE);
	Print(i_arr, I_SIZE);
	Sort(i_arr, I_SIZE);
	Print(i_arr, I_SIZE);
	cout << "Сумма элементов массива: " << Sum(i_arr, I_SIZE) << endl;
	cout << "Среднее-арефмитическое элеьентов массива:" << Avg(i_arr, I_SIZE) << endl;
	cout << "Минимальное значение:" << minValueIn(i_arr, I_SIZE) << endl;
	cout << "Максимальное значениев массиве: " << maxValueIn(i_arr, I_SIZE) << endl;
	//int number_of_shifts;
	//cout << "Введите количествосдвигов: "; cin >> number_of_shifts;  //Enter number of shifts
	//shiftleft(arr,n,number_of_shifts);
	//Print(arr, n);
	//cout << "Введите количество сдвигов:";cin >> number_of_shifts;  //Enter number of shifts
	// shiftRight(arr,n,number_of_shifts);
	//Print(arr, n,);
	cout << delimiter << endl;
	const int D_SIZE = 8;
	double d_arr[D_SIZE];
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << "Сумма элементов массива: " << Sum(i_arr, I_SIZE) << endl;
	//cout << "Среднее-арефмитическое элементов массива:" << Avg(arr, n) << endl;
	//cout << "Минимальное значение:" << minValueIn(arr, n) << endl;
	//out << "Максимальное значениев массиве: " << maxValueIn(arr, n) << endl;
	Sort(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << "Сумма элементов массива: " << Sum(d_arr, D_SIZE) << endl;
	cout << "Среднее-арефмитическое элеьентов массива:" << Avg(d_arr, D_SIZE) << endl;
	cout << "Минимальное значение:" << minValueIn(d_arr, D_SIZE) << endl;
	cout << "Максимальное значениев массиве: " << maxValueIn(d_arr, D_SIZE) << endl;
	Sort(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << delimiter << endl;

	const int C_SIZE = 11;
	char c_arr[C_SIZE];
	FillRand(c_arr, C_SIZE);
	Print(c_arr, C_SIZE);
	cout << "Сумма элементов массива: " << Sum(c_arr, C_SIZE) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(c_arr, C_SIZE) << endl;

	cout << delimiter << endl;

	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
}

