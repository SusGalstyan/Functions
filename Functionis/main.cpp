//Funtions 
#include<iostream>
using namespace std;

int Sum(int a, int b);      //�������� ������� (���������� ������� - function decleration)
int Diff(int a, int b);
int Prod(int a, int b);
double Quot(int a, int b);
 
void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello Fanctions" << endl;
	int a, b;
	cout << "������ ��� �����: "; cin >> a >> b;
	int c = Sum(a, b);     //����� ��� ������������� ������� - Function call.
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Diff(a, b) << endl;
	cout << a << " * " << b << " = " << Prod(a, b) << endl;
	cout << a << " / " << b << " = " << Quot(a, b) << endl;
}

int Sum(int a, int b)       //���������� ������� (����������� ������� - Function definition)
{
	int c = a + b;
	return c;
}
int Diff(int a, int b)
{
	//Difference - �������� 
	return a - b;
}
int Prod(int a, int b)
{
	//Product - ������������ 
	return a * b;
}
double Quot(int a, int b)
{
	//Qoutient - ������� 
	return (double)a / b;
}
