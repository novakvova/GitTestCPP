#pragma once
#include <iomanip>
#include <Windows.h>
using namespace std;
class Student
{
private:
	int age;
	string name;
public:
	Student(string name,int age)
	{
		this->age = age;
		this->name = name;
	}
};

