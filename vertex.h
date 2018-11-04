#include<iostream>
#include <queue> 
using namespace std;
#include"edge.h"
queue <int> que;
int count=1; 
class vertex
{
  public:
  void addvertex(int data , vertex**start) //add vertex
  {
    vertex *temp= new vertex;
    temp->data = data;
    temp->next=NULL;
    temp->start=NULL;
    temp->flag=0;
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
  int degree(vertex *v) //cal degree
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
  vertex* search(int data,vertex *start) //return vertex pointer
  {
     vertex* curr=start;
      while(curr->data!=data)
      {
        curr=curr->next;
      } 
      return curr;
  }
  void addedge(int vertexdata , int data  ,vertex *start) //add edge
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

  void trevsearch(int data , vertex*v , vertex *start) //search treversing using breadth first
  {
    if(!que.empty() || count==1)
    {
      if(v->flag==0)
      {
        v->flag=1;
      cout<<" "<<v->data;
      edge *temp = v->start;
      while(temp!=NULL)
      {
          count=0;
          que.push(*temp->data);
          
        temp=temp->next;
      }  
    }
      vertex *node=search(que.front(),start);
      que.pop();
      trevsearch(data , node , start);
    }
    else
    {
      return ;
    }
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
  bool flag;


};