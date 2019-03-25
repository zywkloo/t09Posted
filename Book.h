#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book
{
  public:
    Book(int=0, string="PriT", string="PriA", int=0, string="PriC");
    Book(int=0, string="PriC", string="PriT", string="PriA", int=0 );
    virtual ~Book();
    virtual void print();
    virtual bool lessThan(Book*) = 0;
    string getterOfCall();
    string getterOfAuthor();

 protected:
    int    id;
    string title;
    string author;
    int  year;
    int type;
    string call;
};

#endif

