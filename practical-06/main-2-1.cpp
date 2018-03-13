#include <iostream>
#include <stdlib.h>
#include <string>
#include "meerkat.h"
#include "cart.h"
using namespace std;
int main(int argc, char const *argv[]) {
  meerkat joseph;
  joseph.setName("joseph");
  joseph.setAge(19);
  meerkat john;
  john.setName("john");
  john.setAge(19);
  meerkat issac;
  issac.setName("issac");
  issac.setAge(19);
  meerkat kelvin;
  kelvin.setName("kelvin");
  kelvin.setAge(19);
  meerkat oscar;
  oscar.setName("oscar");
  oscar.setAge(19);


  cart cart;

  meerkat M[5]={joseph,john,issac,kelvin,oscar};

  for (size_t i = 0; i < 5; i++) {
    /* code */
    if (cart.addMeerkat(M[i])==false) {
      /* code */
      std::cout << "the cart is full" <<std::endl;
    }
  }
/* cart.emptyCart();*/
cart.printMeerkats();
  return 0;
}
