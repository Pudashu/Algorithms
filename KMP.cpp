#include "Basic.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<int> make_next(string sub);
//P[0 ~ k-1] == P[j-k ~ j-1]
status KMP(std::string str,std::string sub){
  int i,j;
  i = j = 0;
  vector <int> next = make_next(sub);
  while(i < str.length() && j < sub.length()){
	if(j == -1 || str[i] == sub[j]){
	  j++;
	  i++;
	}
	else{
	  j = next[j];
	}
  }
  if(j == sub.length())
	return i - j;
  return -1;
}

vector<int> make_next(string sub){
  vector<int> next(sub.length());
  next[0] = -1;
  int j = 0;
  int k = -1;
  for (;j<sub.length();j++){
	if(k==-1 || sub[j] == sub[k]){
	  //if k == -1 -> 1. Initiative situation 2. next[0] == -1 -> sub[j] can't find any same affix
	  if(sub[++j] == sub[++k]){
		next[j] = next[k];
	  }
	  else
		next[j] = k;
	}
	else{
	  k = next[k];
	}
  }
  return next;
}
