#include <iostream>
#include <string>
#include "person.h"
#include "sortperson.h"
using namespace std;
void SortPerson::sort(Person **people, int n){
  int j;
  for (int  i = 1; i < n; i++) {
    j=i;
    while ((j>0) && (people[j]->get_personID()<people[j-1]->get_personID())) {
      Person* temp;
      temp= people[j];
      people[j]=people[j-1];
      people[j-1]=temp;
      j=j-1;
    }
  }

}      // sorts the array of n persons in ascending
                                           // order base on their personID
