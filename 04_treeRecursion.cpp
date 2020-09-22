#include<iostream>

void fun(int n){  
    if(n>0){
        printf("%d ",n);
        fun(n-1);
        printf("\n");
        printf("%d ",n);
        fun(n-1); 
    }  
}

int main(){
    fun(4);
    return 0;
}
