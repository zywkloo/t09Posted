//
// Created by 张一唯 on 2019-03-11.
//

#ifndef T07_NONFICTIONBOOK_H
#define T07_NONFICTIONBOOK_H
#include "Library.h"

class NonFictionBook : public Book {
    public:
        NonFictionBook(int, string, string,string,int);
        bool lessThan(Book* anotherBook);


};


#endif //T07_NONFICTIONBOOK_H
