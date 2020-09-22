#include<iostream>
void funa(int n);
void funb(int n);
void funb(int n){
    if(n>1){
        printf("%d",n);
        funa(n-1);
    }
}
void funa(int n){
    if(n>0){
        printf("%d",n);
        funb(n-1);
    }
}

int main(){
    funa(20);
}