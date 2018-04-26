// CS211 HW6P2 Linked List Queue Client File 

/* -------------------------------------------------
 Your name: Amanda Chan
 Client file to test the lqueue class
 Compiler: g++
 -------------------------------------------------- */ 

// ** include all appropriate files
#include "lqueue.h"
#include<iostream>
using namespace std;
#include <cstdlib>
// You may handle both Cases in one main()
int main()
{
  // ** declare an object first
 lqueue myLine;
 char userans;
 char eltoadd;
 char eltoget;
 
  do{
    cout<<"---------MENU----------"<<endl;
    cout<<"A.testing function isEmpty"<<endl;
    cout<<"B.testing function isFull"<<endl;
    cout<<"C.testing function add"<<endl;
    cout<<"D.testing function remove"<<endl;
    cout<<"E.testing function displayAll"<<endl;
    cout<<"Please enter your choice or Q to quit"<<endl;
    cin>>userans;
    switch(userans)
      {
      case 'A':
	if(myLine.isEmpty())
	  {
	    cout<<"[empty]"<<endl;
	  }
	else 
	  {
	    cout<<"The queue is not empty."<<endl;
	  } 
	break;
      case 'B':
	if(myLine.isFull())
	  {
	    cout<<"The queue is full!"<<endl;
	  }
	else
	  {
	    cout<<"The queue is not full."<<endl;
	  }
	break;
      case 'C':
	cout<<"Please enter the character you would like to add: ";
	cin>>eltoadd;
	myLine.add(eltoadd);
	break;
      case 'D':myLine.remove(eltoget);
	break;
      case 'E':myLine.displayAll();
	break;
      case'Q':
	exit(1);
      default:cout<<"Invalid entry. Try again."<<endl;
      }
  }while(userans!='Q');
}


