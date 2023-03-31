typedef enum{ATOM,LIST} ElemTag;
typedef int AtomType;
typedef struct GLNode{
  int ElemTag;
  union Elem 
  {
	AtomType atom;
	struct ListType{
	  struct GLNode * hp,*tp;
	}ptrs;	  
  };
}* GList;
