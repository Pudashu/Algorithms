#include <iostream>
#include "Dijkstra.h"
void ReadGraph(Graph G,Route &T){
  int i = 0;
  for(;i < G.vexnum ; i++){
	T[i].Header =  G.Vertices[i]; 
  }
}
void InitTable(Vertex Start,Graph G, Route &T){
  int i;
  ReadGraph(G,T);
  for (i = 0 ; i < G.vexnum ; i++){
	T[i].D = INFINITY;
	T[i].Path = NotAVertex;
  }
  T[Start].D = 0;
}
