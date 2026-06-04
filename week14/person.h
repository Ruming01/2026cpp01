#ifndef PERSON_H
#define PERSON_H
#include "date.h"
#include "string"


class Person
{
  private:
    string id;
    Date birthDate;  // has-a 관계
  public: 
    Person(string id, Date birthDate);   
    ~Person(); 
    void print() const; 
};
#endif