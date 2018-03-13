#include <iostream>
#include "person.h"
#include "coach.h"
using namespace std;
int Coach::nextID=0;
Coach::Coach(string n, int l) : Person(n,"coach",l)                   // creates a person with name n, whose occupation
{
  name=n;
  serviceLength=l;
  occupation="coach";
  personID=nextID;
  nextID++;

}                                           // is “coach” and service length is l

int Coach::get_salary(){
  if (serviceLength<15) {
    return salary;
  }
  else{
    return salary*3;
  }
}
