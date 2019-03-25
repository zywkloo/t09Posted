#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book
{
  public:
    Book(int=0, string="Call", string="title", string="author", int=1000 );
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

