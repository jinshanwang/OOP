#include <iostream>
#include "person.h"
using namespace std;


int Person::id=0;
Person::Person(string n, string o, int l)// creates a person of name n, occupation o, and service length l
{
  name=n;
  occupation=o;
  serviceLength=l;
  personID=id++;
  salary=0;
}
void Person::set_salary(int s){
  if (s>0)
  {
   salary=s;
  }
  
}

void Person::set_name(string n){
  name=n;
}
string Person::get_name(){
  return name;

}
void Person::set_occupation(string o){
  occupation=o;
}
string Person::get_occupation (){
  return occupation;
}
int Person::get_personID(){
  return personID;
}
