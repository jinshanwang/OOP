#ifndef aircraft_H
#define aircraft_H
#include "person.h"
#include <string>


class aircraft {
private:
  /* data */
  string number;
  string aname;
  string bname;
  person a;
  person b;

public:

  aircraft(string callsign,person thePilot,person theCoPilot);
  void setPilot(person thePilot);      // change the pilot
  person getPilot();
  void setCoPilot(person theCoPilot);  // change the co-pilot
  person getCoPilot();
  void printDetails();                 // print the callsign, a new line, the pilot name,
                                     // a new line, the co-pilot name and a final newline.

};
#endif
