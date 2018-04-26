// CS211 HW3 Header file for the stack class
// Use the purple lines from the notes to complete this file

/* ------------------------------------------------
 Your name: **
 Header file for the stack class
 Compiler: g++
 --------------------------------------------------- */

// ** first include appropriate files
#include<iostream>
using namespace std;

// ** declare aliases


// ** add appropriate comments, too
const int MAX=10;
typedef char el_t;
class stack
{
 private: // data members and utility functions
  el_t el[MAX];//declares array of element type el_t with constant size MAX
  int top; //keeps track of size of stack
  void stackError(int);//fatal error handling: displays message depending on error 
 public:  // for the client to use
  stack(); //constructor
  ~stack(); //deconstructor
  bool isEmpty(); 
  bool isFull();
  void push(el_t);
  void pop(el_t&);
  void displayAll();
  

};
