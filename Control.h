#ifndef CONTROL_H
#define CONTROL_H
#include <iostream>
#include <string>
#include "Library.h"
#include "View.h"
#include "FictionBook.h"
#include "NonFictionBook.h"

using namespace std;



class Control
{
  public:
    Control();
    void launch();
    
  private:
    Library SCSLib;
    Library loungeLib;
    View view;
};

#endif
