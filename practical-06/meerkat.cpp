#include <iostream>
#include <stdlib.h>
#include <string>
#include "meerkat.h"
#include "cart.h"
using namespace std;
meerkat::meerkat()
{

}
void meerkat::setName(string meerName/* arguments */) {
  /* code */

  name = meerName;
}
string meerkat::getName()
{
  return name;
}
void meerkat::setAge(int meerAge/* arguments */) {
  /* code */

  age= meerAge;
}
int meerkat::getAge()
{
  return age;
}
