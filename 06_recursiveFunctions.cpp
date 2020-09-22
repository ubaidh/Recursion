#include<iostream> 
int sumofn(int n){
   if(n<2) return 1;
   else return n + sumofn(n-1);
}
int factofn(int n){
    if(n<2) return 1;
    else return n*factofn(n-1);
}
int power(int m,int n){
    if(n==0) return 1;
    else return m* power(m,n-1);
}
double e(int x,int n){
    static double p=1,f=1;
    double r;
    if(n==0){
        return 1;
    }else{
        r= e(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }
}
int main(){
   std::cout<<sumofn(10)<<"\n";
   std::cout<<factofn(5)<<"\n";
   std::cout<<power(2,9)<<"\n";
   std::cout<<e(4,15);
}
