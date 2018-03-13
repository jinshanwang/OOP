#include <iostream>
#include "person.h"
#include "player.h"
#include "coach.h"
#include "team.h"
using namespace std;
int main(int argc, char const *argv[]) {
  Team c;
  Person** a;
  a=c.get_team();
  for (size_t i = 0; i < 4; i++) {
    std::cout << a[i]->get_name() << endl;
  }
  return 0;
}
