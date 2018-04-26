// CS211 HW6P2 Linked List Queue Header File 
// Complete based on Week10 notes

/* -------------------------------------------------
 Your name: Amanda Chan
 Header file for the lqueue class
 Compiler: g++
 ---------------------------------------------------- */
#ifndef LQUEUEH
#define LQUEUEH
#include<iostream>
using namespace std;

// ** declare el_t
typedef char el_t;
// ** declare struct Node
 struct Node
 {
   el_t Elem;//variable that holds the element
   Node *Next;//pointer that will point to the next node
 };
// ** be sure to add appropriate comments
class lqueue
{
 private: // data members and utility functions
  Node *Front;//pointer that will point to the front node
  Node *Rear;//pointer that will point to the rear node
  void queueError(const char*Mesg);

 public: // available to the client
  lqueue(); // constructor   
  ~lqueue();//deconstructor  
  // HOW TO CALL: No argument. Returns Boolean.
  // PURPOSE: returns true if linked list queue is empty, otherwise false
  bool isEmpty();

  // HOW TO CALL:  Provide the element to be added as an argument. Returns nothing.
  //  PURPOSE: adds a new node to the rear of the linked list queue
  void addRear(el_t);

  // HOW TO CALL: Provide the element to be passed as an argument.Returns nothing.   
  // PURPOSE: if empty, calls error message
  // if not empty, deletes the front node
  void deleteFront(el_t&);

  // HOW TO CALL: No argument. Returns nothing.
  //PURPOSE: display everything in the queue from front horizontally enclosed in []
  //if empty, displays [ empty ]
  void displayAll();

  
};

#endif 
