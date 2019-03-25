#include <iostream>
#include <string>
using namespace std;

#include "Library.h"

Library::Library() {
  // cout << "Library ctor" << endl;
}

void Library::addBook(Book* newBook) {
  list.add(newBook);
}

void Library::print() {
  list.print();
}
