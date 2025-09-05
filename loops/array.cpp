#include <iostream>

int main(){

	int scores[100];

	std::cout<<std::endl;

	for( size_t i{0}; i<100; ++i){
		scores[i]*=3;
	}

	for( size_t i{0}; i<100; ++i){
		std::cout<<scores[i]<<std::endl;
	}

	return 0;
}
