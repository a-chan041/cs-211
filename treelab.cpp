// CS211 Tree Lab - Yoshii

// Your name: Amanda Chan

// ** declare tnode first

#include<iostream>
using namespace std;


struct tnode
{
  int Elem;
  tnode *Rchild;
  tnode *Lchild;
};


int main()
{
  int x;
  // ** declare the root pointer
  tnode *root;
  tnode *RC;
  tnode *RCC;
  // ** declare another pointer V
  tnode *v;
  tnode *LCC;

  // ** create a binary tree with 5 nodes with elements obtained from the user
  // ** first create 3 nodes (parent, lchild, rchild)
  // ** then go down to the lchild (V points there) and add its children
  // ** make sure all leaf pointers are NULL

  root=new tnode;
  cout<<"Please enter an integer ";  
  cin>>x;
  root->Elem=x;
  
  root->Rchild= new tnode;
  RC=root->Rchild;
  cout<<"Please enter an integer ";  
  cin>>x;
  RC->Elem=x;
  
  RC->Lchild=NULL;
  RC->Rchild=NULL;
  root->Lchild=new tnode;
  v=root->Lchild;
  cout<<"Please enter an integer ";  
  cin>>x;
  v->Elem=x;
  
  v->Lchild=new tnode;
  LCC=v->Lchild;
  cout<<"Please enter an integer ";  
  cin>>x;
  LCC->Elem=x;
  
  LCC->Lchild=NULL;
  LCC->Rchild=NULL;
  v->Rchild=new tnode;
  RCC=v->Rchild;
  cout<<"Please enter an integer ";  
  cin>>x;
  RCC->Elem=x;
  
  RCC->Lchild=NULL;
  RCC->Rchild=NULL;

cout<<root->Elem<<endl;  
cout<<RC->Elem<<endl;
cout<<v->Elem<<endl;
cout<<LCC->Elem<<endl;
cout<<RCC->Elem<<endl;
return 0;
  
}

