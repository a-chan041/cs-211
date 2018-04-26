// CS211 HW6P2 Linked List Queue Client File
// Complete based on Week10 notes

/* -------------------------------------------------
 Your name: Amanda Chan
 Client file for the lqueue class
 Compiler: g++
 ---------------------------------------------------- */
#include<iostream>
#include<iomanip>
#include"lqueue.h"
#include<cstdlib>
using namespace std;



int main()
{
  cout<<"Case 1:"<<endl;//Case 1
  lqueue L;//declares L
  cout<<"1.";if(L.isEmpty())//calls isEmpty function and reports result
    {
      cout<<"The queue is empty.";
      cout<<endl;
    }
  else
    {
      cout<<"The queue is NOT empty.";
      cout<<endl;
    }
  cout<<"2.";cout<<"Displayng queue: "; L.displayAll();cout<<endl;//displays linked list queue by calling displayAll function
  cout<<"3.";cout<<"adding integers..."; L.addRear('1');L.addRear('2');L.addRear('3');cout<<endl;//calls addRear function, adds 3 integers 1,2,3
  cout<<"4.";cout<<"Displaying queue: "; L.displayAll();cout<<endl;//displays linked list queue by calling displayAll function 
  el_t X;//declares X as el_ t data type to use in main
  cout<<"5.";
  L.deleteFront(X);cout<<"deleting "<<X<<",";L.deleteFront(X);cout<<"deleting "<<X;cout<<endl;//calls deleteFront function twice and indicates the elements removed
  cout<<"6.";cout<<"Displaying queue: ";L.displayAll();cout<<endl;//displays linked list queue by calling displayAll function 
  cout<<"7."; if(L.isEmpty())//calls isEmpty function and reports result
    {
      cout<<"The queue is empty";
      cout<<endl;
    }
  else
    {
      cout<<"The queue is NOT empty.";
      cout<<endl;
    }
  cout<<"8."; L.deleteFront(X);cout<<"deleting "<<X;cout<<endl;//calls deleteFront function twice and indicates the elements removed
  cout<<"9.";if(L.isEmpty())//calls isEmpty function and reports result
    {
      cout<<"The queue is empty.";
      cout<<endl;
    }
  else
    {
      cout<<"The queue is NOT empty.";
      cout<<endl;
    }
  cout<<endl;
  cout<<"Case 2:"<<endl;//Case 2
  lqueue L2;//declares L2
 cout<<"1."; L2.displayAll();cout<<endl;//displays linked list queue by calling displayAll function 
 cout<<"2."; L2.deleteFront(X);cout<<X;cout<<endl;//calls deleteFront function twice and indicates the elements removed
}
