#include<iostream>
using namespace std;
#include"edge.h"
class vertex
{
  public:
  void addvertex(int data , vertex**start) 
  {
    vertex *temp= new vertex;
    temp->data = data;
    temp->next=NULL;
    temp->start=NULL;
    if(*start==NULL)
    {
      *start = temp;
    }
    else
    {
      vertex* curr=*start;
      while(curr->next!=NULL)
      {
        curr=curr->next;
      }
      curr->next=temp;
    }
  }
  int degree(vertex *v)
  {
    edge *temp=v->start;
    int count=0;
      while(temp!=NULL)
       {
         count++;
         temp=temp->next;
       }
       return count;
  }
  vertex* search(int data,vertex *start)
  {
     vertex* curr=start;
      while(curr->data!=data)
      {
        curr=curr->next;
      } 
      return curr;
  }
  void addedge(int vertexdata , int data  ,vertex *start)
  {
   vertex * node = search(vertexdata,start);
    vertex* curr=start;
      while(curr->data!=data)
      {
        curr=curr->next;
      }
      edge temp;
      temp.addedge(&curr->data ,&(node->start));
      temp.addedge(&node->data ,&(curr->start));
  }
  void print(vertex *v)
  {
    if(v!=NULL)
    {
      edge *temp=v->start;
      cout<<"Vertex : "<<v->data<<endl<<"Edges : " ;
      while(temp!=NULL)
       {
         cout<<" "<<*temp->data;
         temp=temp->next;
       }
       cout<<endl<<endl;
       print(v->next);
       
     }
     else
     {
       return;
     }
  }
  private:
  int data;
  vertex *next;
  edge *start;


};