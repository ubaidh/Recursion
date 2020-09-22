#include<iostream>
int fib(int n){
    if(n<2){
        return n;
    }else{
        return fib(n-2)+fib(n-1);
    }
}
int main(){
    for(int i=0;i<=10;i++){
        std::cout<<fib(i)<<" ";
    }

}
