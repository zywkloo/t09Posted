#include <iostream>
#include <iomanip>
using namespace std;

#include "Book.h"
#include "List.h"

List::List(){
  head = NULL;
}

List::~List(){
  Node *currNode, *nextNode;

  currNode = head;

  while (currNode != NULL) {
    nextNode = currNode->next;
    delete currNode->book;
    delete currNode;
    currNode = nextNode;
  }
}

void List::add(Book* newBook){
  Node* nNode;
  Node* currNode;
  Node* prevNode;

  nNode = new Node;
  nNode->book = newBook;
  nNode->next = NULL;
  nNode->prev = NULL;

  if (head == NULL){
    head=nNode;
    return;
  }

  currNode = head;
  prevNode = NULL;

//locate the location to insert the new Book node
  while (currNode != NULL) {
    if (newBook->lessThan(currNode->book))
      break;
    prevNode = currNode;
    currNode = currNode->next;
  }
//if we need to insert before the 1st node
  if (prevNode == NULL) {
    head = nNode;
//if we don't need to insert before the 1st node
  } else {
    prevNode->next = nNode;
    nNode->prev=prevNode;

  }
  nNode->next = currNode;
  if (currNode!=NULL) { currNode->prev = nNode;}
}

void List::print(){
  Node* currNode = head;
  Node *tail= NULL;
  cout <<" " <<endl;
  cout <<"Lib:advance " <<endl;
  while (currNode != NULL) {
    currNode->book->print();
    tail=currNode;
    currNode = currNode->next;
  }
  currNode=tail;
  cout <<" " <<endl;
  cout <<"Lib:back" <<endl;
  while (currNode != NULL) {
    currNode->book->print();
    currNode = currNode->prev;
  }
}

void List::copy(Array& arr){
  Node* currNode = head;
  //int index = 0;
  while (currNode != NULL ) { //&& index < arr.getSize()
    arr.add(currNode->book);
    currNode = currNode->next;
    //index++;
  }
}
