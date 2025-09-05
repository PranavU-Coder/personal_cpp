#include <iostream>

int main(){

	int scores[] {1,2,3,4,5};

	int count {std::size(scores)};

	std::cout<<"the size of the array is : "<< count << std::endl;

	return 0;
}
