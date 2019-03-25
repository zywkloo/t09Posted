#ifndef LIST_H
#define LIST_H
#include <string>
#include "Book.h"
#include "Array.h"
using namespace std;

class List
{
   class Node
    {
        friend class List;
        private:
        Book* book;
        Node* prev;
        Node* next;
    };
 
    public:
        List();
        ~List();
        void add(Book*); 
        void print();
        void copy(Array&);
    private:
        Node* head;
};

#endif
