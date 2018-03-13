#include <iostream>
#include <string>
#include "person.h"
using namespace std;


int main() {

  person person;
  person.setName("joseph");
  person.setSalary(5000);

  std::cout << "my name is " <<person.getName()<<"."<<endl;
  std::cout << "my salary is " <<person.getSalary()<<"."<<endl;
  return 0;
}
