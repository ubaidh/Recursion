// trianglar series 
#include<iostream>
int func(int c){
    if(c < 2){
        return 1;
    }else{
        return c+func(c-1);
    }
}

int main(){
    int num;
    std::cin>>num;
    for(int i=1;i<num;i++){
        printf("%d ",func(i));
    }   
}
