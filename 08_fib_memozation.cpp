#include<iostream>
long long int f[100];

long long int fib(int n){
    if(n<2){
        f[n]=n;
        return n;
    }else{
        if(f[n-2] == -1) f[n-2] = fib(n-2);
        if(f[n-1] == -1) f[n-1] = fib(n-1);
    return f[n-2] + f[n-1];     
    }
   
}
int main(){
    for(int i=0;i<100;i++){
        f[i]=-1;
    }
    for(int i=0;i<100;i++){
        std::cout<<i+1<<" "<<fib(i)<<" \n";
    }
    return 0;
}