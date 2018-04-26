
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
  Front=NULL;
  Rear=NULL;
  
}
//PARAMETER: char* Mesg to pass the string to the function queueError
//PURPOSE: This function displays the error message if the linked list queue is empty
void lqueue::queueError(const char*Mesg)
{
  cout<<Mesg<<endl;
    exit(1);
}
//PARAMETER: no parameters
//PURPOSE: Checks if linked list queue is empty
bool lqueue::isEmpty()  
{
  if((Front==NULL)&&(Rear==NULL))
    {
      return true;
    }
  else
    return false;
}
//PARAMETER: el_t newElem, the value that the user wants to add to the new node
//PURPOSE: adds a new node to the end of the linked list queue and puts a new element into the Elem field of this new node
void lqueue::addRear(el_t newElem)
{
  if(isEmpty())//SPECIAL CASE: If this is going to be the first node, creates a new node and makes Front pointer and Rear pointer point to it.
    { Front= new Node;
      Rear=Front;
      Rear->Next=NULL;
      Front->Elem=newElem;
    }
  else//if linked list queue is not currently empty, create a new node to the end of the linked list queue and puts a new element into the Elem field of this new node.
    {
      Rear->Next = new Node;  
      Rear = Rear->Next;       
      Rear->Next = NULL;     
      Rear->Elem = newElem;       
    }
}

//PARAMETER: el_t& oldElem, passes the old element that user deleted from the front node
//PURPOSE:The function deletes a node from the front of the linked list  queue
void lqueue::deleteFront(el_t& oldElem)
{
  if(isEmpty())//SPECIAL CASE: If the linked list queue is empty, calls utility function queueError to display queueError message
     {
       queueError("Error: list is empty.");
     }
  else//if the linked list queue is not empty, and removing from the front does not cause the list to be empty, then give back the front node element through oldElem from pass by reference and also remove the front node  
     {
      
       Node *Second = Front->Next;//Second pointer saves Front's next pointer to ensure that we have no dangling pointers after deleting the node that Front points to.
      oldElem=Front->Elem;
      delete Front;                       
      Front = Second;                 
      if(Front==NULL)//makes sures that both Front and Rear become NULL if deleting from the Front causes the linked list queue to be empty ( there is only one node in the list)  
	{
	  Rear=NULL;
	}
     } 
}

//PARAMETER: no parameters
//PURPOSE: Displays each element of the linked list queue horizontally starting from Front in [].

void lqueue::displayAll()
{
  
  if(isEmpty())//SPECIAL CASE: If the linked list queue is empty, display [ empty ]
    {
      cout<<"[ empty ]";
    }
  else//if the linked list queue is not empty, then display each element of the queue horizontally starting from Front in []
    {
      Node *P;//P pointer is used to traverse the linked list queue and output each element of the queue while P does not equal NULL 
      P=Front;
      while(P!=NULL)
	{
	  cout<<"[ "<<P->Elem<<"]";
	  P=P->Next;
	}
      
    }
}
//PARAMETER: no parameters
//PURPOSE: deconstructor, destroys lqueue objects
lqueue::~lqueue()
{
  while(!isEmpty())//While the linked list queue is not empty, calls deleteFront repeatedly to delete all nodes, leaving the Heap clean. 
    {
      el_t deletedItem;// The item taken out of the linked list queue
      deleteFront(deletedItem);
    }
}

