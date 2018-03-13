#ifndef cart_H
#define cart_H
#include <string>
#include "meerkat.h"
using namespace std;
class cart {
private:


int num_meerkat;
meerkat cart_meerkat[4];

public:
  cart();                         // create an empty cart object
  bool addMeerkat(meerkat cat);   // adds a meerkat to the cart, returns false if full
  void emptyCart();               // remove all meerkats from the cart
  void printMeerkats();           // print the name, a space, the age, then a new line
                                  // for each meerkat in the order they were added

};

#endif
