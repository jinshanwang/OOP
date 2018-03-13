#include <iostream>
#include <string>
#include "person.h"
#include "aircraft.h"

#include <stdlib.h>

using namespace std;

aircraft::aircraft(string callsign,person thePilot,person theCoPilot)
{
  number=callsign;
  a=thePilot;
  b=theCoPilot;

}

void aircraft::setPilot(person thePilot){
  a=thePilot;
}
person aircraft::getPilot(){
  return a;
}
void aircraft::setCoPilot(person theCoPilot){
  b=theCoPilot;
}
person aircraft::getCoPilot(){
  return b;
}
void aircraft::printDetails()
{
  std::cout << number<<std::endl;

  std::cout << a.getName()<<std::endl;

  std::cout <<  b.getName()<<std::endl;
  
}
