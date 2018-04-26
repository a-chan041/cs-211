// CS211 HW3 Implementation file for the stack class
// Use purple lines from the notes to complete this file.

/* ----------------------------------------------

 Your name: Amanda Chan
 Implementation file for the stack class
 Compiler: g++

 ----------------------------------------------- */

// ** include appropriate files, including stack.h 
#include<iostream>
#include "stack.h"
#include <cstdlib>
using namespace std;

// ** define all member fuctions and utility functions below
// ** provide appropriate comments

//PURPOSE: constructor
//PARAMETER: no parameters

stack::stack()
{
  top=-1;
}

//PURPOSE: deconstructor
//PARAMETER: no parameters

stack::~stack()
{
  //nothing to do
}

//PURPOSE: returns true if stack is empty, else returns false (empty means top=-1)
//PARAMETER:no parameters, returns bool

bool stack::isEmpty()
{
  if(top==-1)
    {    
      return true;
    }
 else 
   {  
     return false;
   }
}

//PURPOSE: checks top and returns true is full, else returns false (full means top=MAX-1)
//PARAMETER: no parameters, returns bool

bool stack::isFull()
{
  if (top==MAX-1)
    {
      return true;
    }
  else
    {
      return false;
    }
} 

//PURPOSE: calls isFull and if true, calls stackError with approrpiate error type, else adds element to stack(el) while incrementing top
//PARAMETER: element elem to be pushed

void stack::push(el_t elem)
{
  if(isFull())stackError(1);
  else{top++;el[top]=elem;}
}

//PURPOSE: calls isEmpty and if true, calls stackError with appropriate error type, else removes element from stack(el) to be returned by reference
//PARAMETER: element elm to pop and return

void stack::pop(el_t& elem)
{
  if(isEmpty())stackError(2);
  else{elem=el[top];top--;cout<<elem<<endl;}
}

//PURPOSE: displayAll calls isEmpty and if true, displays [empty], else displays the elements vertically sandwiched between lines of dashes
//PARAMETER:no parameters

void stack::displayAll()
{
  if(isEmpty())
    {   
      cout<<"[empty]"<<endl;
    }
  else
    for(int i=top;i>=0;i--)
      {
	cout<<"|"<<el[i]<<"|"<<endl;
      }
}

//PURPOSE: Fatal error handling, displays appropriate error message depending on errorType and exit(1) to stop execution of client
//PARAMETER: int errorType to decide which appropriate error message is to be displayed

void stack::stackError(int errorType)
{
  if(errorType==1)
    {
      cout<<"Fatal error:stack overflow"<<endl;
    }
  if(errorType==2)
    {
      cout<<"Fatal error:stack underflow"<<endl;
    }
  exit(1);
}
      
