//
// Created by 张一唯 on 2019-03-11.
//

#include "NonFictionBook.h"

NonFictionBook::NonFictionBook(int id, string callNumber, string title, string author, int year){
    type = 0;
}

NonFictionBook::NonFictionBook(int id, string title , string author, int year, string call)
:Book(id, title, author, year,call ){
    type = 0;
};

bool NonFictionBook::lessThan(Book* anotherBook)  //ascending order of call
        {
    if (call < anotherBook->getterOfCall()) {
        return true;
    } else {
        return false;
    }
}