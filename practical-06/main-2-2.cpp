#include <iostream>
#include <string>
#include "person.h"
#include "aircraft.h"

using namespace std;


int main() {

  person Joseph;

  Joseph.setName("Joseph");

  person Isaac;

  Isaac.setName("Isaac");

  person kelvin;
  
  kelvin.setName("kelvin");

  aircraft aircraft("CX137",Joseph,Isaac);
  aircraft.setPilot(kelvin);
  aircraft.setCoPilot(Joseph);




  aircraft.printDetails();
  return 0;
}
