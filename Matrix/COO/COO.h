#define  MAXSIZE 10000
typedef int ElemType;
typedef struct  {
   int       i,j;//非零元行、列下标
   ElemType    e;
 } Triple;        //三元组定义

typedef struct  {
   Triple  data[MAXSIZE+1];   //三元组从下标1开始存放,0号可以存放mu,nu,tu
   int  mu,nu,tu;         //对于矩阵的行数、列数和非零元素值
 } TSMatrix;              //三元组顺序表的定义

TSMatrix ADD(TSMatrix A,TSMatrix B);
//POS数组 记录每行第一个非零元在三元组中位置
//记录每行非零元数目NUM[]
