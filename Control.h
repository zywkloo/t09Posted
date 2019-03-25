#ifndef CONTROL_H
#define CONTROL_H
#include <iostream>
#include <string>
#include "Library.h"
#include "View.h"
#include "FictionBook.h"
#include "NonFictionBook.h"
#include "BookServer.h"
#include "Array.h"

using namespace std;



class Control
{
  public:
    Control();
    ~Control();
    void launch();
    
  private:
    Library SCSLib;
    Library loungeLib;
    View view;
    BookServer bookServer;
};

#endif
