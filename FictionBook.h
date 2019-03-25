//
// Created by 张一唯 on 2019-03-11.
//

#ifndef T07_FICTIONBOOK_H
#define T07_FICTIONBOOK_H
#include "Library.h"
#include <string>
class FictionBook : public Book {

    public:
        FictionBook(int, string, string, string,int);
        bool lessThan(Book* anotherBook);


};


#endif //T07_FICTIONBOOK_H
