#include<iostream>
using namespace std;
class edge
{
  public:
   void addedge(int *data , edge**start)
  {
    edge *temp= new edge;
    temp->data = data;
    temp->next=NULL;
   // temp->flag=0;
    if(*start==NULL)
    {
      *start = temp;
    }
    else
    {
      edge* curr=*start;
      while(curr->next!=NULL)
      {
        curr=curr->next;
      }
      curr->next=temp;
    }
  }
/*  void highflag(edge *e)
  {
    e->flag=1;
  }*/
  /*void print(edge e)
  {
    cout<<" "<<&e.data;
  }*/
 // private:
  edge *next;
  int *data;
 // bool flag;
};