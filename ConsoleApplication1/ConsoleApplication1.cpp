// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <conio.h>

using namespace std;

class Employee
{
public:
	int r = 300;

	void show()
	{
		cout << "Employee: employee\n";
		cout << "FIO: Dariya Ivanova\n";
		cout << "Dariya`s salary: "<< r <<endl<< "\n";
	}
};
class Manager :public Employee
{
public:
	int bonus = 150;
	void show()
	{
		cout << "Employee: manager\n";
		cout << "FIO: Kirill Sofronov\n";
		cout << "Kirill`s salary: "<< r+bonus << endl; 
	}
};
int main()
{
Employee s; 
Manager p; 
s.show(); 
p.show();
int r;
int bonus;
return 0;
}
