#include <iostream>
#include <stdlib.h>
#include <string>
#include "meerkat.h"
using namespace std;


int main(int argc, char const *argv[]) {
  /* code */
  meerkat meerkat;
  meerkat.setName("joseph");
  meerkat.setAge(19);
  std::cout << "hello, I am " <<meerkat.getName() <<endl;
  std::cout << "I am " <<meerkat.getAge()<<endl;

  return 0;
}
