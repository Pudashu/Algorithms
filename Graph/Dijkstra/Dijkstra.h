#include "../AdjacenctList.h"
#define INFINITY 999999
typedef int Dist;
typedef int Vertex;//use Path to search in Graph.vertices
struct RouteNode;
struct RouteNode{
  Vertex Path;
  Dist D;
  HeadCell Header;
  bool Known;
};

#define NotAVertex (-1)
typedef struct RouteNode Route[MAX_VERTEX_NUM];

void InitTable(Vertex Start,Graph G,Route &T);
void PrintPath(Vertex V,Route T);
void Dijkstra(Route &T);
void ReadGraph(Graph G, Route &T);
