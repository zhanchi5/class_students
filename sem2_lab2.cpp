#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

class Student
{
  char name[64];
  char surname[64];
  int age;
public:
  void fill_data();
  void show_data();
};

void Student::fill_data()
{
  cout << "Name: ";
	
  cin >> name;
  cout << endl;

  cout << "Surname:";
  cin >> surname;
  cout << endl;

  cout << "Age:";
  cin >> age;
  cin.get();
  cout << endl;
}

void Student::show_data()
{
	cout << name << " " << surname << " " << age << " years;" << endl;
}

int main()
{
	unsigned int n = unsigned int();
	/*cout << "Enter amount of students:";
	cin >> n;
	cout << endl;*/
	
	cout << "Enter data!" << endl;

	Student *P;
	P = new Student[n];
	
	for (unsigned int i = 0; i < n; ++i)
		P[i].fill_data();

	for (unsigned int i = 0; i < n; ++i)
		P[i].show_data();
	
	free(P);



	_getch();
    return 0;
}
