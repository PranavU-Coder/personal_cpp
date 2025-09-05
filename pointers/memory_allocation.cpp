#include <iostream>

int main(){

	int *number {nullptr};
	number = new int;

	*number = 69;

	std::cout<<std::endl;
	std::cout<<"Dynamically Allocating Memory"<<std::endl;
	std::cout<<"number is : "<<*number<<std::endl;

	delete number;
	number = nullptr;

	return 0;
}
