#ifndef SORT_PERSON_H
#define SORT_PERSON_H
#include <iostream>
#include <string>
#include "person.h"
using namespace std;

class SortPerson {



public:
   static void sort(Person **people, int n);     // sorts the array of n persons in ascending
                                              // order base on their personID
};
#endif
