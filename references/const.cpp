#include <iostream>

int main(){

	int age {18};
	const int& ref_age {age};

	std::cout<<"age : "<<age<<std::endl;
	std::cout<<"ref_age : "<<ref_age<<std::endl;

	// the value is fixed till the end of time
	
	return 0;
}
