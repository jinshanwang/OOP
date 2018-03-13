#ifndef person_H
#define person_H
#include <string>

using namespace std;
class person
{
private:
  /* data */
  string name;
  int wage;

public:
person();
person(string myName, int Salary); // a name and salary must be provided to create a person
void setName(string myName);      // change the person's name
string getName();
void setSalary(int mySalary);     // change the person's name
int getSalary();

};







  #endif
