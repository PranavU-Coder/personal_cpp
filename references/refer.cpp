#include <iostream>

int main(){

	int int_data{10};
	double double_data{20};

	// references
	
	int& ref_int_data{int_data};
	double& ref_double_data{double_data};

	std::cout<<"int data : "<<int_data<<std::endl;
	std::cout<<"&int data : "<<&int_data<<std::endl;
	std::cout<<"double data : "<<double_data<<std::endl;
	std::cout<<"&double data : "<<&double_data<<std::endl;


	std::cout<<"ref int  data : "<<ref_int_data<<std::endl;
	std::cout<<"&ref int data : "<<&ref_int_data<<std::endl;
	std::cout<<"ref double data : "<<ref_double_data<<std::endl;
	std::cout<<"&ref double data : "<<&ref_double_data<<std::endl;

	return 0;
}
