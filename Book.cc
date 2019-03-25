#include <iostream>
#include <iomanip>
using namespace std;

#include "Book.h"

Book::Book(int i, string t, string a, int y, string c)
{
  id     = i;
  title  = t;
  author = a;
  year   = y;
  type = -1;
  call = c;
}

Book::~Book() { }

void Book::print()
{
       cout <<"  Type:"  << setw(6) << ((type==1)?"Fic":"NonFic")
       <<"; Id: " << setw(3)  << id
       <<"; Title: "    << setw(40) << title
       <<";  Author: "  << setw(20) << author
       <<";  Year: "    << year
       <<";  Call: "    << call << endl;
}

string Book::getterOfCall() { return call ;};
string Book::getterOfAuthor() { return author ;};
