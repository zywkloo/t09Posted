#ifndef VIEW_H
#define VIEW_H
#include <iostream>
#include <string>
using namespace std;

#include "Library.h"

class View
{
  public:
    View();
    int readBookType();
    int getSelection();
    void readBook(string&, string&, int&, int&, string&);
    void printLibrary(Library *);
  
};

#endif
