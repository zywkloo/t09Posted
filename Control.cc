#include <iostream>
#include <iomanip>
using namespace std;

#include "Control.h"


Control::Control() 
{
  Array ficBooks ;
  Array nonficBooks ;
  bookServer.retrieve(ficBooks,nonficBooks) ;
  for (int i=0; i <ficBooks.getSize();i++)    loungeLib.addBook(ficBooks.get(i));
  for (int j=0; j <nonficBooks.getSize();j++) SCSLib.addBook(nonficBooks.get(j));
}

Control::~Control()
{
  Array ficBooks ;
  Array nonficBooks ;
  loungeLib.copyBooks(ficBooks);
  SCSLib.copyBooks(nonficBooks);
  bookServer.update(ficBooks,nonficBooks) ;
}

void Control::launch()
{
  string title, author,call;
  int id, year;
  while (view.getSelection()) {
    int bookType = view.readBookType();
    view.readBook(title, author, id, year, call);
    if(bookType==0){  //scs lib
      Book* bk = new NonFictionBook(id, call, title, author, year);
      SCSLib.addBook(bk);
    } else{
      Book* bk = new FictionBook(id,call, title, author, year);
      loungeLib.addBook(bk);
    }
  }
  view.printLibrary(&SCSLib);
  view.printLibrary(&loungeLib);
}
