
#ifndef COACH_H
#define COACH_H
#include <iostream>
#include "person.h"
#include <string>
using namespace std;
class Coach : public Person{
private:
  static int nextID ;

public:
  Coach(string n, int l);                    // creates a person with name n, whose occupation
                                             // is “coach” and service length is l
  int get_salary();
};

  #endif
