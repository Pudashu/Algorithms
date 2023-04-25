#include <iostream>
using namespace std;
const int N = 1000000;
int id = 0;
int Trie[N][26]={0};
int cnt[N] = {0};


void insert(std::string s){
  int p = 0;
  for(int i = 0; i < s.size() ; i++){
	  int x = s[i] - 'a';
	  if(!Trie[p][x]) Trie[p][x] = ++id;
	  p = Trie[p][x];
  }
  cnt[p]++;
}

int find(std::string s){
  int p = 0 ;
  for(int i = 0 ; i < s.size() ; i++){
	int x = s[i] - 'a';
	if(Trie[p][x] == 0) return 0;
	p = Trie[p][x];
  }
  return cnt[p];
}
