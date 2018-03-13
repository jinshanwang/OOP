#include "person.h"

#include <iostream>
#include <string>
using namespace std;

person::person(){

}
person::person(string myName,int Salary)
{
  name = myName;
  wage = Salary;

}
void person::setName(string myName)      // change the person's name
{

name=myName;

}
string person::getName()
{
  return name;
}
void person::setSalary(int mySalary){

  wage=mySalary;


}     // change person's Salary;
int person::getSalary(){
  return wage;
}
