// CS211 HW6P2 Linked List Queue Implementation File 
// Complete based on Week10 notes

/* -------------------------------------------------
 Your name: Amanda Chan
 Implementation file for the lqueue class
 Compiler: g++
 ---------------------------------------------------- */

// ** include all appropriate files
#include "lqueue.h"
#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;


// ** Define all member functions and utility functions
// ** Don't forget that the descructor must destroy the object
// ** Make sure all required comments are provided


//PARAMETER: no paramters
//PURPOSE: constructor creates lqueue
lqueue::lqueue()//constructor
{
  rear=-1;
  front=0;
  count=0;
}
//PARAMETER: int errorType to display appropriate error
//PURPOSE: This function displays the correct error type depending on the type
void lqueue::queueError(int errorType)
{
  if(errorType==1)
    cout<<"Fatal error: queue overflow"<<endl;
  if(errorType==2)
    cout<<"Fatal error: queue underflow"<<endl;
  exit(1);
}
//PARAMETER: no paramters
//PURPOSE: Checks if queue is empty
bool lqueue::isEmpty()  
{
  if(count==0)
    {
      return true;
    }
  else
    return false;
}
//PARAMETER: no paramters
//PURPOSE: Checks if queue is full
bool lqueue::isFull()
{
  if(count==MAX)
    {
      return true;
    }
  else
    return false;

}

//PARAMETER: el_t elt, passes the character that user wants to add to queue
//PURPOSE:The function adds a character to the queue 
void lqueue::add(el_t elt)
{
  if(isFull())
    {
      queueError(1);
    }
  else
    {
      rear=(rear+1)%MAX;
      el[rear]=elt;
      count++;
    }
}
//PARAMETER: el_t elt, passes elt by value to remove a character from teh stack
//PURPOSE: This function removes a character from the queue
void lqueue::remove(el_t&elt)
{
  if(isEmpty())
    {
      queueError(2);
    }
  else
    {
      elt=el[front];
      front=(front+1)%MAX;
      count--;
    }
}

//PARAMETER: no parameters
//PURPOSE: displays all the elements in the queue
void lqueue::displayAll()
{
  int i;
  int currentPosition=front;

  if(isEmpty())
    {
      cout<<"Queue is empty\n";
      return;
    }
  else
    {
      cout<<"[";
      for(i=0;i<count;i++)
	{
	  cout<<setw(2)<<el[currentPosition];
	  currentPosition=(currentPosition+1)%MAX;
	}
      cout<<" ]";    
      cout<<"\n";
      cout<<"\n";
    
    }
}
//PARAMETER: no parameters
//PURPOSE: deconstructor, destroys lqueue objects
lqueue::~lqueue()
{

}

