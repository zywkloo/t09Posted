#include <iostream>
#include <iomanip>
using namespace std;

#include "Control.h"

Control::Control() 
{}

void Control::launch()
{
  string title, author,call;
  int id, year;
  while (view.getSelection()) {
    int bookType = view.readBookType();
    view.readBook(title, author, id, year, call);
    if(bookType==0){  //scs lib
      Book* bk = new NonFictionBook(id, title, author, year,call);
      SCSLib.addBook(bk);
    } else{
      Book* bk = new FictionBook(id, title, author, year,call);
      loungeLib.addBook(bk);
    }
  }
  view.printLibrary(&SCSLib);
  view.printLibrary(&loungeLib);
}
