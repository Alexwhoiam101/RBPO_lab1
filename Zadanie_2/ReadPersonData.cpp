#include <iostream>
#include <string>
using namespace std;

string ReadPersonName();
unsigned short ReadPersonAge();
void ReadPersonSalary(double* salary);
void ReadPersonHeight();
void ReadPersonWeight(unsigned short& weight);

void ReadPersonData(string& name, unsigned short& age, double& salary){
	cout << "Input name: ";
	name = ReadPersonName();
	cout << "Input age: ";
	age = ReadPersonAge();
	cout << "Input salary: ";
	ReadPersonSalary(&salary);
}

void ReadPersonData(string& name, unsigned short& age, unsigned short& height, unsigned short& weight){
	cout << "Input name: ";
	name = ReadPersonName();
	cout << "Input age: ";
	age = ReadPersonAge();
	cout << "Input height: ";
	ReadPersonHeight();
	cout << "Input weight: ";
	ReadPersonWeight(weight);
}