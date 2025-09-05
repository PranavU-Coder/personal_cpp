#include <iostream>

int main(){

	std::cout<<"declaring a pointer, and pointing towards it with another pointer"<<std::endl;

	int *ptr1 {new int {100}};
	int *ptr2 {ptr1};

	// ptr1 is the master pointer here since it has the access to the data whereas ptr2 is the slave pointer merely pointing towards ptr1
	
	std::cout<<"the address of ptr1 is : "<<ptr1<<" and the value of ptr1 is : "<<*ptr1<<std::endl;

	if(!(ptr1==nullptr)){
			std::cout<<"the address of ptr2 is : "<<ptr2<<" and the value of ptr2 is : "<<*ptr2<<std::endl;
	}

	// freeing ptr1 
	
	delete ptr1;
	ptr1 = nullptr;

	// trying again
	
	if(!(ptr1==nullptr)){
			std::cout<<"the address of ptr2 is : "<<ptr2<<" and the value of ptr2 is : "<<*ptr2<<std::endl;
	} else {
	        std::cerr<<"DANGEROUS TERRITORY DON'T EXPLORE"<<std::endl;
	}

	return 0;
}
			
