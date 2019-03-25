#include <iostream>
#include <iomanip>
using namespace std;

#include "View.h"

View::View() 
{}

void View::readBook(string& title, string& author, int& id, int& year, string& call)
{
  cout << "id:  ";
  cin  >> id;
  cout << "title:   ";
  cin.ignore(); // discard the '\n' after 'cin >> id'
  getline(cin, title);
  cout << "author: ";
  getline(cin, author);
  cout << "year:  ";
  cin  >> year;
  cin.ignore(); // discard the '\n' after 'cin >> id'
  cout << "call: ";
  getline(cin, call);
}

int View::getSelection()
{
  int numOptions = 1;
  int selection  = -1;

  cout << endl;
  cout << "(1) Add book" << endl;
  cout << "(0) Exit" << endl;

  while (selection < 0 || selection > numOptions) {
    cout << "Enter your selection: ";
    cin  >> selection;
  }

  return selection;
}


int View::readBookType()
{
  int numOptions = 1;
  int selection  = -1;

  cout << endl;
  cout << "(0) SCS Lib, non fiction book." << endl;
  cout << "(1) lounge Lib, fiction book." << endl;

  while (selection < 0 || selection > numOptions) {
    cout << "Enter your selection: ";
    cin  >> selection;
  }

  return selection;
}

void View::printLibrary(Library* lib)
{
  lib->print();
}
