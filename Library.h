#ifndef LIBRARY_H
#define LIBRARY_H
#include <string>
using namespace std;

#include "List.h"

class Library
{
  public:
    Library();
    void addBook(Book*);
    void print();
    void copyBooks(Array&);

  private:
    List list;
    
};

#endif
