#include <map>
#include <string>
#define MAX_VERTEX_NUM 20
enum GraphKind {
	DG,DN,UDG,UDN
};
typedef int VertexType;
typedef std::string OtherInfo;
struct ADNode;
typedef ADNode * ADL;
struct HeadCell{
  VertexType data;
  ADL next;
  OtherInfo others;
};
typedef HeadCell HList[MAX_VERTEX_NUM];
struct ADNode{
  int index;
  int weight;
  ADL next;
};

typedef struct{
  int vexnum,arcnum;
  GraphKind kind;
  HList Vertices;
}Graph;
