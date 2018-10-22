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
  void print(edge e)
  {
    cout<<" "<<&e.data;
  }
 // private:
  edge *next;
  int *data;
};