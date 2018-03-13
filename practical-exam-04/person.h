#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;
class Person {
protected:

  string name;        // the name of a person
  string occupation;  // the occupation of a person
  int salary;         // the salary of a person; takes only non-negative values
  int serviceLength;
  int personID;




public:
    Person(string n, string o, int l);// creates a person of name n, occupation o, and service length l

    void set_salary(int s);

    virtual int get_salary()=0;

    void set_name(string n);

    string get_name();

    void set_occupation(string o);

    string get_occupation ();

    int get_personID();
    static int id;

};
#endif
