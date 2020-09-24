#include <iostream>
int tri(int n){
  if(n<2) return n;
  else return n+tri(n-1);
}
int main() {
  for(int i=0;i<10;i++){
    std::cout<<tri(i)<<" ";
  }
}
