#include<iostream>
 unsigned long long int fact(int n){
    if(n<2)return 1;
    else return n * fact(n-1);
}
int main(){
    std::cout<<fact(20)<<"\n ";
}

