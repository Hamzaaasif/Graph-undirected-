#include<iostream>
using namespace std;
#include"vertex.h"
int main()
{
  vertex *start=NULL;
  vertex v;
  v.addvertex(1,&start); //vertex , start
  v.addvertex(2,&start);
  v.addvertex(3,&start);
  v.addvertex(4,&start);
  v.addvertex(5,&start);
  v.addvertex(6,&start); 
  v.addvertex(7,&start);
  v.addvertex(8,&start);
  v.addvertex(9,&start);
  v.addvertex(10,&start);
  v.addvertex(11,&start); 
  v.addvertex(12,&start);
  v.addvertex(13,&start);
  v.addvertex(14,&start);

  v.addedge(1 , 2 , start); //vertex , edge , start 
  v.addedge(1 , 3 , start);
  v.addedge(1 , 5 , start);
  v.addedge(2 , 9 , start);
  v.addedge(2 , 8, start);
  v.addedge(3 , 4 , start);
  v.addedge(4 , 5 , start);
  v.addedge(5 , 6 , start);
  v.addedge(6 , 7 , start);
  v.addedge(7 , 8 , start);
  v.addedge(9 , 10, start);
  v.addedge(10 , 11 , start);
  v.addedge(11 , 12 , start);
  v.addedge(11 , 13 , start);
  v.addedge(11 , 14 , start);
  v.addedge(12 , 14 , start);
  v.print(start);
  cout<<"Degree of vertex 3 is"<<v.degree(v.search(3,start));
  cout<<endl<<"Treversing breadth first : "<<endl;
  v.trevsearch(20,start,start);
  cout<<endl;
  system("pause");
}