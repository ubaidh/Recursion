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
	using namespace std::chrono;
	high_resolution_clock::time_point t1 = high_resolution_clock::now();
	for(int i=1;i<=20;i++){
		std::cout<<factm(i)<<"\n ";
	}   
	high_resolution_clock::time_point t2 = high_resolution_clock::now();

	duration<double> time_span = duration_cast<duration<double>>(t2 - t1);
  	std::cout << "It took me " << time_span.count() << " seconds.";
  	std::cout << std::endl;

  	high_resolution_clock::time_point t3 = high_resolution_clock::now();
	for(int i=1;i<=20;i++){
		std::cout<<fact(i)<<"\n ";
	}   
	high_resolution_clock::time_point t4 = high_resolution_clock::now();

	duration<double> time_span1 = duration_cast<duration<double>>(t4 - t3);
  	std::cout << "It took me " << time_span1.count() << " seconds.";
  	std::cout << std::endl;
}
