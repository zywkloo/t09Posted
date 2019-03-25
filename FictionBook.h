//
// Created by 张一唯 on 2019-03-11.
//

#ifndef T07_FICTIONBOOK_H
#define T07_FICTIONBOOK_H
#include "Library.h"
#include <string>
class FictionBook : public Book {

    public:
        FictionBook(int=0, string="EmptyTitle", string="EmptyAuthor", int=0, string= "EmptyCall");
        FictionBook(int=0, string="EmptyCall", string="EmptyTitle", string= "EmptyAuthor",int=0);
        bool lessThan(Book* anotherBook);


};


#endif //T07_FICTIONBOOK_H
