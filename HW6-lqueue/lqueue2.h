// CS211 HW6P2 Linked List Queue Header File 
// Complete based on Week10 notes

/* -------------------------------------------------
 Your name: Amanda Chan
 Header file for the lqueue class
 Compiler: g++
 ---------------------------------------------------- */

#ifndef QUEUEH
#define QUEUEH
#include<iostream>
using namespace std;

// ** declare el_t
typedef char el_t;
// ** declare struct Node
const int MAX=10;
// ** be sure to add appropriate comments
class lqueue
{
 private: // data members and utility functions
  el_t el[MAX];
  int count;
  int front;
  int rear;
  void queueError(int);//displays error message for the errorType to it and does exit(1;)
 public: // available to the client
  // constructor 
  lqueue(); 

  //destructor 
  ~lqueue();

  // HOW TO CALL: No argument. Returns Boolean.
  // PURPOSE: returns true if queue is empty, otherwise false
  bool isEmpty();

  // HOW TO CALL:  No argument. Returns Boolean.
  //  PURPOSE: returns true if queue is full, otherwise false
  bool isFull();

  // HOW TO CALL: Provide the element to be added as an argument.   
  // PURPOSE: if full, calls an emergency exit routine
  // if not full, enters an element at the rear 
  void add(el_t);

  // HOW TO CALL: Gives back the removed element via pass by reference. 
  // PURPOSE: if empty, calls an emergency exit routine
  // if not empty, removes the front element to give it back via pass by reference
  void remove(el_t&);

  // HOW TO CALL: No argument. Returns nothing.
  //PURPOSE: display everything in the queue from front to rear horizontally enclosed in []
  //if empty, displays [ empty ]
  void displayAll();

    
};

#endif 

