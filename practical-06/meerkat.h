#ifndef meerkat_H
#define meerkat_H
#include <string>

using namespace std;
class meerkat {
private:
  /* data */
  string name;
  int age;

public:
  meerkat ();
  void setName(string meerName);
  string getName();
  void setAge(int meerAge);
  int getAge();

};

#endif
