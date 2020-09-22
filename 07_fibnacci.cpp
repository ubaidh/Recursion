#include<iostream>
long long g[40]={0};
int fib(int n){
	if(g[n]!=0)return g[n];
    if(n<2){
        return n;
    }else{
    	g[n]=fib(n-2)+fib(n-1);
        return g[n];
    }
}
int main(){
    for(int i=0;i<=40;i++){
        std::cout<<fib(i)<<" ";
    }

}
