// CS211 HW3 Test client for the stack class
// Must test each member function with do-while menu-switch and output
// easy to understand results

/* ----------------------------------------------------

 Your name: Amanda Chan
 Test client file for HW3 to test the stack class
 Compiler: g++

 ------------------------------------------------- */

//** first, include the appropriate files, including stack.h
#include<iostream>
#include<cstdlib>
#include"stack.h"
using namespace std;
// The driver to test every member function (recall week1-3 labs testingpractice)
int main()
{
  // ** declare a stack object first
  stack myStack;
  int choice;
  el_t pu;
    do{
    cout<<"---------MENU----------"<<endl;
    cout<<"1.testing function isFull"<<endl;
    cout<<"2.testing function isEmpty"<<endl;
    cout<<"3.testing function push"<<endl;
    cout<<"4.testing function pop"<<endl;
    cout<<"5.testing function displayAll"<<endl;
    cout<<"Please enter your choice or -1 to quit"<<endl;
    cin>>choice;
    switch(choice)
      {
      case 1:
	if(myStack.isFull())
	  {
	    cout<<"The stack is full!"<<endl;
	  }
	else 
	  {
	    cout<<"The stack is still available."<<endl;
	  }								 
	break;
      case 2:
	if(myStack.isEmpty())
	  {
	    cout<<"The stack is empty!"<<endl;
	  }
	else
	  {
	    cout<<"The stack still contains elements."<<endl;
	  }
	break;
      case 3:
	cout<<"Please enter the character you would like to push: ";
	cin>>pu;
	myStack.push(pu);
	break;
      case 4:myStack.pop(pu);
      	break;
      case 5:myStack.displayAll();
	break;
      case -1:
	exit(1);
      default:cout<<"Invalid entry. Try again."<<endl;
      }
    }while(choice!=-1);
}
