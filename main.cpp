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
  v.addedge(1 , 3 , start); //vertex , edge , start 
  v.addedge(4 , 2 , start);
  v.addedge(5 , 3 , start);
  v.addedge(2 , 3 , start);
  v.addedge(3 , 4, start);
  v.addedge(2 , 5 , start);
  v.addedge(4 , 5 , start);
  v.print(start);
  cout<<"Degree of vertex 3 is "<<v.degree(v.search(3,start));
  cout<<endl;
  system("pause");
}