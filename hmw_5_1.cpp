/*
** Assignment : hmw_5_1
** Author     : Max Aliprandi
** Class      : PIC10A
*/
#include <iostream>
#include <string>

using namespace std;

//function prototypes
class Person
{
public:
  Person() {};
  Person(string pname, int page);
  string get_name() const;
  int get_age() const;
  // void set_age(int new_age);
  // void set_name(int new_name);
private:
  string name;
  double age; //0 if unknown
};

class PEmployee : Person
{
public:
  PEmployee() {};
  PEmployee(string employee_name, int employee_age, double initial_salary);
  void set_salary(double new_salary);
  double get_salary() const;
  void print() const;
private:
  Person person_data;
  double salary;
};

int main()
{
  char x;
  double sal;
  int age;
  string name;

  while(true || !cin)
  {
    cout << "Enter information on the employee.\n";
    cout << "Enter the name: ";
    cin >> name;
    cout << "Enter the age: ";
    cin >> age;
    cout << "Enter the salary: ";
    cin >> sal;

    PEmployee employee(name, age, sal);
    employee.print();

    cout << "Continue? (y/n) ";
    cin >> x;
    cout << "\n";
    if (x == 'n') break;
  }

  if(!cin)
    cout << "Incorrect input. Exit!\n";
  return 0;
}

//function definitions

Person::Person(string pname, int page)
{};

PEmployee::PEmployee(string employee_name, int employee_age, double initial_salary)
{ PEmployee emp(employee_name, employee_age, initial_salary); };

string Person::get_name() const
{ return name; }

int Person::get_age() const
{ return age; }

double Person PEmployee::get_salary() const
{ return salary; }

void Person PEmployee::set_salary(double n)
{ this -> get_salary() = n; }

void Person PEmployee::print() const
{
  cout << "Employee information print out :\n"
      << get_name() << "\n" << get_age() << " years old\n"
      << "Salary = $" << get_salary();
}
