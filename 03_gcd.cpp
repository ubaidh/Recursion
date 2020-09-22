#include<iostream>

int gcd(int x, int y){
  if (y == 0) return x;
  else return gcd(y, x % y);
}

int main(){
   int a,b;
   std::cout<<"enter a and b"<<std::endl;
   std::cin>>a>>b;
   std::cout<<gcd(a,b);
   return 0;
}