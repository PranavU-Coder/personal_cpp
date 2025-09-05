#include <iostream>

int main(){

	int variable {7};
	int* pointer;

	pointer = &variable;
	std::cout<<"address of the variable is : "<<pointer<<std::endl; // referencing
	std::cout<<"the value of the variable is : "<<*pointer<<std::endl; // dereferencing
	return 0;
}
