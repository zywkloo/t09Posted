//
// Created by 张一唯 on 2019-03-11.
//

#include "FictionBook.h"

FictionBook::FictionBook(int id, string callNumber, string title, string author, int year){
    type = 1 ;
}



bool FictionBook::lessThan(Book* anotherBook)  //ascending alphabetical of author
{
    if ( author.compare(anotherBook->getterOfAuthor()) < 0) {
        return true;
    } else {
        return false;
    }
}