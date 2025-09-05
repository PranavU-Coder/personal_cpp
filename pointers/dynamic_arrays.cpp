#include <iostream>

int main(){

	size_t size{10};

	double* salaries {new double[size]};

	int* students {new(std::nothrow) int[size]{}};

	double* scores {new(std::nothrow) double[size]{10,20,30,40,50}};

	if(scores){

		std::cout<<"size of scores : "<<sizeof(scores)<<std::endl;
		std::cout<<"successful allocation of memory"<<std::endl;

		for(size_t i{}; i<size; ++i){
			std::cout<<"value : "<<scores[i]<<" : "<<*(scores+i)<<std::endl;
		}
	}

	delete [] salaries;
	salaries = nullptr;
	
	delete [] students;
	students = nullptr;
	
	delete [] scores;
	scores = nullptr;


	return 0;
}
