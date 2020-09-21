#include<iostream>
#include<chrono>
unsigned long long cache[25]={0};
unsigned long long factm(int n){
    if(n<2)return 1;
    if(cache[n]!=0){
    	return cache[n];
    }
    else {
    	cache[n]=n * factm(n-1);
   		return  cache[n];
    }
}

unsigned long long fact(int n){
    if(n<2)return 1;
    else {
    	return n * fact(n-1);
   		
    }
}
int main(){
	
	std::chrono::high_resolution_clock::time_point t1 = std::chrono::high_resolution_clock::now();
	for(int i=1;i<=20;i++){
		std::cout<<factm(i)<<"\n ";
	}   
	std::chrono::high_resolution_clock::time_point t2 = std::chrono::high_resolution_clock::now();

	std::chrono::duration<double> time_span = std::chrono::duration_cast<std::chrono::duration<double>>(t2 - t1);
  	std::cout << "It took me " << time_span.count() << " seconds.";
  	std::cout << std::endl;

  	std::chrono::high_resolution_clock::time_point t3 = std::chrono::high_resolution_clock::now();
	for(int i=1;i<=20;i++){
		std::cout<<fact(i)<<"\n ";
	}   
	std::chrono::high_resolution_clock::time_point t4 = std::chrono::high_resolution_clock::now();

	std::chrono::duration<double> time_span1 = std::chrono::duration_cast<std::chrono::duration<double>>(t4 - t3);
  	std::cout << "It took me " << time_span1.count() << " seconds.";
  	std::cout << std::endl;
}
